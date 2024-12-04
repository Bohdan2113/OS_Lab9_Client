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
    ui->nameJoinLineEdit->setText("");

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
    ui->newIdeaTextEdit->setText("");
    ideaFile << ideaItem << std::endl;

    ideaFile.close();
}

void MainWindow::on_quitButton_clicked()
{
    ui->newIdeaTextEdit->setText("");

    ui->stackedWidget->setCurrentWidget(ui->waitPage);
    ui->nameWaitLabel->setText(QString::fromStdString(myName));

    QTimer::singleShot(1000, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->votePage);
        FillVoteTable();
    });
}

void MainWindow::on_voteButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->waitPage);
    ui->nameWaitLabel->setText(QString::fromStdString(myName));

    QTimer::singleShot(1000, this, [this]() {
        ui->stackedWidget->setCurrentWidget(ui->podiumPage);
        OutputPodium();
        int rowCount = ui->voteTable->rowCount();
        for (int i = rowCount - 1; i >= 0; --i) {
            ui->voteTable->removeRow(i);
        }
    });
}

void MainWindow::on_homeButton_2_clicked()
{
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


void MainWindow::FillVoteTable()
{
    std::ifstream ideaFile("C:\\Users\\bogda\\OneDrive\\Desktop\\Ideas.txt");

    if (!ideaFile.is_open())
        return;

    std::string ideaItem;
    int row = 0;

    while (std::getline(ideaFile, ideaItem)) {
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

