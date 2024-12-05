#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <fstream>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

MainWindow::~MainWindow()
{
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

    ui->stackedWidget->setCurrentWidget(ui->waitPage);
    ui->nameWaitLabel->setText(QString::fromStdString(myName));

    QTimer::singleShot(1000, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->ideaPage);
    });

}

void MainWindow::on_sendButton_clicked()
{
    std::ofstream ideaFile("C:\\Users\\bogda\\OneDrive\\Desktop\\Ideas.txt", std::ios::app);
    if (!ideaFile.is_open())
        return;

    std::string ideaItem = ui->newIdeaTextEdit->toPlainText().toStdString();
    if(ideaItem.empty())
        return;

    ui->newIdeaTextEdit->setText("");
    ideaFile << ideaItem << std::endl;

    ideaFile.close();
}

void MainWindow::on_quitButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->waitPage);
    ui->nameWaitLabel->setText(QString::fromStdString(myName));
}

void MainWindow::on_voteButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->waitPage);
    ui->nameWaitLabel->setText(QString::fromStdString(myName));
}

void MainWindow::on_homeButton_2_clicked()
{
    ui->nameJoinLineEdit->setText("");

    ui->newIdeaTextEdit->setText("");

    int rowCount = ui->voteTable->rowCount();
    for (int i = rowCount - 1; i >= 0; --i) {
        ui->voteTable->removeRow(i);
    }

    ui->firstPlaceLabel->setText(QString::fromStdString("First"));
    ui->secondPlaceLabel->setText(QString::fromStdString("Second"));
    ui->thirdPlaceLabel->setText(QString::fromStdString("Third"));

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
    switch (pageIndex)
    {
    case 0: break;
    case 1:
        timer = new CountdownTimer(0, 3, ui->timeIdeaLabel, ui->votePage, ui->stackedWidget);
        break;
    case 2:
        delete timer;
        FillVoteTable();
        timer = new CountdownTimer(0, 3, ui->timeVoteLabel, ui->podiumPage, ui->stackedWidget);
        break;
    case 3: break;
    case 4:
        delete timer;
        OutputPodium();
        break;
    default:
        break;
    }
}


void MainWindow::FillVoteTable()
{
    std::ifstream ideaFile("C:\\Users\\bogda\\OneDrive\\Desktop\\Ideas.txt");

    if (!ideaFile.is_open())
        return;

    std::string ideaItem;
    int row = 0;

    while (std::getline(ideaFile, ideaItem)) {
        if(ideaItem.empty())
            continue;

        ui->voteTable->insertRow(row);

        QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(ideaItem));
        ui->voteTable->setItem(row, 0, item);

        row++;
    }

    ideaFile.close();
}

void MainWindow::OutputPodium()
{
    QModelIndexList selectedIndexes = ui->voteTable->selectionModel()->selectedIndexes();
    std::vector<std::string> topIdea(3);
    int i = 0;

    if (!selectedIndexes.isEmpty()) {
        for (const QModelIndex& index : selectedIndexes) {
            if (i < 3) { // Перевірка на кількість місць
                QString ideaText = ui->voteTable->item(index.row(), 0)->text(); // Оскільки таблиця має один стовпець
                topIdea[i++] = ideaText.toStdString();
            }
        }
    }

    ui->firstPlaceLabel->setText(QString::fromStdString(topIdea[0]));
    ui->secondPlaceLabel->setText(QString::fromStdString(topIdea[1]));
    ui->thirdPlaceLabel->setText(QString::fromStdString(topIdea[2]));
}







