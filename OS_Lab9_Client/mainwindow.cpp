#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QThread"

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

    QThread::sleep(2);
    ui->stackedWidget->setCurrentWidget(ui->ideaPage);

}


void MainWindow::on_quitButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->waitPage);
    ui->nameWaitLabel->setText(QString::fromStdString(myName));

    QThread::sleep(2);
    ui->stackedWidget->setCurrentWidget(ui->votePage);
}


void MainWindow::on_voteButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->waitPage);
    ui->nameWaitLabel->setText(QString::fromStdString(myName));

    QThread::sleep(2);
    ui->stackedWidget->setCurrentWidget(ui->podiumPage);
}


void MainWindow::on_homeButton_2_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

