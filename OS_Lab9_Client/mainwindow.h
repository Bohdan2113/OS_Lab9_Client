#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_quitButton_clicked();

    void on_voteButton_clicked();

    void on_homeButton_2_clicked();

private:
    Ui::MainWindow *ui;

    std::string myName;
};
#endif // MAINWINDOW_H
