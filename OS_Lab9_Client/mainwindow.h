#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "countdowntimer.h"
#include "QThread"
#include "QTimer"

#include <QTableWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_joinButton_clicked();
    void on_sendButton_clicked();
    void on_quitButton_clicked();
    void on_voteButton_clicked();
    void on_homeButton_2_clicked();

    void on_voteTable_itemSelectionChanged();
    void on_nameJoinLineEdit_textChanged(const QString &lineText);
    void on_newIdeaTextEdit_textChanged();
    void on_stackedWidget_currentChanged(int pageIndex);

    void FillVoteTable();
    void OutputPodium();



private:
    Ui::MainWindow *ui;

    std::string myName;
    CountdownTimer* timer;
};
#endif // MAINWINDOW_H
