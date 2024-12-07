#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

#include <fstream>
#include <vector>

#include "client.h"

SOCKET gConnectSocket = INVALID_SOCKET;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    timer = nullptr;

    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->homePage);

    podium.push_back(ui->firstPlaceLabel);
    podium.push_back(ui->secondPlaceLabel);
    podium.push_back(ui->thirdPlaceLabel);

    do{
        mutexQueue = CreateMutex(NULL, FALSE, NULL);
        if (mutexQueue == NULL) {
            qDebug() << "CreateMutex failed with error: " << GetLastError();
            break;
        }

        int iResult = 0;

        WSADATA wsaData;
        struct addrinfo  hints;

        iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
        if (iResult != 0) {
            qDebug() << "WSAStartup failed with error: " << iResult;
            break;
        }

        ZeroMemory(&hints, sizeof(hints));
        hints.ai_family = AF_UNSPEC;
        hints.ai_socktype = SOCK_STREAM;
        hints.ai_protocol = IPPROTO_TCP;

        iResult = getaddrinfo(DEFAULT_HOST, DEFAULT_PORT, &hints, &result);
        if (iResult != 0 || result == NULL) {
            qDebug() << "getaddrinfo failed with error: " << iResult;
            WSACleanup();
            break;
        }
    }while(0);
}

MainWindow::~MainWindow()
{
    freeaddrinfo(result);
    CloseHandle(mutexQueue);
    closesocket(gConnectSocket);
    WSACleanup();

    delete timer;
    timer = nullptr;

    delete ui;
}

void MainWindow::on_joinButton_clicked()
{
    myName = ui->nameJoinLineEdit->text().toStdString();
    if(myName.empty()) {
        ui->warningLabel->setText("Please enter your name!");
        ui->nameJoinLineEdit->setStyleSheet(
            "background: transparent;"
            "background-color: rgba(255, 255, 255, 0.7);"
            "width: 477px;"                      /* Ширина кнопки */
            "height: 50px;"
            "border: 2px solid red;"
            );

        return;
    }

    if(!tryListening(gConnectSocket, myName)) {
        QMessageBox::warning(this, "Error", "Couldn`t connect to the server.\nTry again later.");
        return;
    }

    ui->nameWaitLabel->setText(QString::fromStdString(myName));
    ui->stackedWidget->setCurrentWidget(ui->waitPage);

}

void MainWindow::on_sendButton_clicked()
{
    std::string ideaText = ui->newIdeaTextEdit->toPlainText().toStdString();
    if(ideaText.empty())
        return;

    ui->newIdeaTextEdit->setText("");

    sendIdea(ideaText);
}

void MainWindow::on_quitButton_clicked()
{
    quitSending();

    ui->nameWaitLabel->setText(QString::fromStdString(myName));
    ui->stackedWidget->setCurrentWidget(ui->waitPage);
}

void MainWindow::on_voteButton_clicked()
{
    QModelIndexList selectedIndexes = ui->voteTable->selectionModel()->selectedIndexes();
    std::string voiceStr;

    if (!selectedIndexes.isEmpty()) {
        for (const QModelIndex& index : selectedIndexes) {
            voiceStr += std::to_string(ideaVector[index.row()].ideaTID) + " ";
        }
    }

    sendVoice(voiceStr);

    ui->nameWaitLabel->setText(QString::fromStdString(myName));
    ui->stackedWidget->setCurrentWidget(ui->waitPage);
}

void MainWindow::on_homeButton_2_clicked()
{
    ui->nameJoinLineEdit->setText("");

    ui->newIdeaTextEdit->setText("");

    int rowCount = ui->voteTable->rowCount();
    for (int i = rowCount - 1; i >= 0; --i) {
        ui->voteTable->removeRow(i);
    }

    ui->firstPlaceLabel->setText(QString::fromStdString(""));
    ui->secondPlaceLabel->setText(QString::fromStdString(""));
    ui->thirdPlaceLabel->setText(QString::fromStdString(""));

    ui->stackedWidget->setCurrentWidget(ui->homePage);
}


void MainWindow::on_voteTable_itemSelectionChanged()
{
    int selectedCount = ui->voteTable->selectionModel()->selectedIndexes().count();

    if (selectedCount > 3) {
        // Отримуємо останній вибраний індекс
        QModelIndex lastSelected = ui->voteTable->selectionModel()->selectedIndexes().last();

        // Відмічаємо цей елемент як не вибраний
        ui->voteTable->selectionModel()->select(lastSelected, QItemSelectionModel::Deselect);
    }
}

void MainWindow::on_nameJoinLineEdit_textChanged(const QString &lineText)
{
    QString sanitizedText = lineText;
    sanitizedText.remove('|');

    if (sanitizedText != lineText)
        ui->nameJoinLineEdit->setText(sanitizedText);

    if(lineText.size() == 1) {
        ui->warningLabel->setText("");
        ui->nameJoinLineEdit->setStyleSheet(
            "background: transparent;"
            "background-color: rgba(255, 255, 255, 0.7);"
            "width: 477px;"                      /* Ширина кнопки */
            "height: 50px;"
            );
    }
}

void MainWindow::on_newIdeaTextEdit_textChanged()
{
    QString text = ui->newIdeaTextEdit->toPlainText();

    if (!text.isEmpty() && text.back() == '\n') {
        text.chop(1);
        ui->newIdeaTextEdit->setPlainText(text);
        ui->sendButton->click();
    }
}

void MainWindow::on_stackedWidget_currentChanged(int pageIndex)
{
    int minutes = 0;
    int seconds = 0;

    static QTimer* progStageTimer = nullptr; // Таймер для перевірки progStage

    switch (pageIndex)
    {
    case 0:
        delete timer;
        timer = nullptr;
        break;

    case 1:
        delete timer;
        timer = nullptr;

        minutes = sessionTime / 60;
        seconds = sessionTime % 60;

        ui->topicIdeaLabel->setText(QString::fromStdString(sessionTopic));
        timer = new CountdownTimer(minutes, seconds, ui->timeIdeaLabel, ui->waitPage, ui->stackedWidget);
        break;

    case 2:
        delete timer;
        timer = nullptr;

        FillVoteTable();
        timer = new CountdownTimer(1, 0, ui->timeVoteLabel, ui->waitPage, ui->stackedWidget);
        break;

    case 3:
        delete timer;
        timer = nullptr;

        // Якщо таймер вже запущений, видалимо його
        if (progStageTimer) {
            delete progStageTimer;
            progStageTimer = nullptr;
        }

        // Створюємо новий таймер
        progStageTimer = new QTimer(this);
        connect(progStageTimer, &QTimer::timeout, [this]() {
            if (progStage == "SS") {
                progStage = "DS";
                ui->stackedWidget->setCurrentWidget(ui->ideaPage);

                progStageTimer->stop();
                delete progStageTimer;
                progStageTimer = nullptr;
            }
            else if (progStage == "ES") {
                progStage = "DS";
            }
            else if (progStage == "SV") {
                progStage = "DS";
                ui->stackedWidget->setCurrentWidget(ui->votePage);

                progStageTimer->stop();
                delete progStageTimer;
                progStageTimer = nullptr;
            }
            else if (progStage == "EV") {
                progStage = "DS";
            }
            else if (progStage == "TS") {
                qDebug() << "ProgSatge when TS: " << progStage;
                progStage = "DS";
                ui->stackedWidget->setCurrentWidget(ui->podiumPage);

                progStageTimer->stop();
                delete progStageTimer;
                progStageTimer = nullptr;
            }
            else if (progStage == "LOH") {
                progStage = "DS";
                ui->homeButton_2->click();
                QMessageBox::warning(this, "Error", "Server kicked you ;(\nYou are loh :).");

                progStageTimer->stop();
                delete progStageTimer;
                progStageTimer = nullptr;
            }
            qDebug() << "ProgSatge: " << progStage;
        });

        progStageTimer->start(500); // Перевірка кожні 100 мс
        break;

    case 4:
        delete timer;
        timer = nullptr;
        qDebug() << "Before outpodium";
        OutputPodium();
        qDebug() << "After outpodium";
        break;

    default:
        break;
    }
}



void MainWindow::FillVoteTable()
{
    ui->voteTable->setRowCount(ideaVector.size());

    for (int row = 0; row < ideaVector.size(); ++row) {
        QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(ideaVector[row].message));
        ui->voteTable->setItem(row, 0, item);
    }
}

void MainWindow::OutputPodium()
{
    for(int i = 0; i < ideaExtVector.size(); i++) {
        if (podium[i] == nullptr)
            qDebug() << "podium " << i << " nullptr";
        podium[i]->setText(QString::fromStdString(ideaExtVector[i].message));

        qDebug() << "podium set: " << i;
    }
}







