/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *joinButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QWidget *ideaPage;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QLabel *timeIdeaLabel;
    QVBoxLayout *verticalLayout_3;
    QLabel *topicLabel;
    QTextEdit *ideaTextEdit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *quitButton;
    QPushButton *sendButton;
    QWidget *votePage;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_2;
    QLabel *timeVoteLabel;
    QLabel *label_4;
    QTableWidget *chooseIdeaTableWidget;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *sendButton_2;
    QWidget *page;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_11;
    QLabel *waitLabel;
    QSpacerItem *verticalSpacer_10;
    QWidget *podiumPage;
    QPushButton *backHomeButton;
    QLabel *labelSecondPlace;
    QLabel *labelFirstPlace;
    QLabel *labelThirdPlace;
    QLabel *labelFirstPlace_2;
    QLabel *labelFirstPlace_3;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QFont font;
        font.setPointSize(16);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        homePage = new QWidget();
        homePage->setObjectName("homePage");
        homePage->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/mainPageBackground.png);"));
        verticalLayout = new QVBoxLayout(homePage);
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(homePage);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(65);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/res/images/logo.png);\n"
"background: transparent;\n"
""));

        verticalLayout->addWidget(label_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        label = new QLabel(homePage);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Julius Sans One")});
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;  \n"
"background: transparent;\n"
""));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        nameLineEdit = new QLineEdit(homePage);
        nameLineEdit->setObjectName("nameLineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameLineEdit->sizePolicy().hasHeightForWidth());
        nameLineEdit->setSizePolicy(sizePolicy);
        nameLineEdit->setMinimumSize(QSize(400, 0));
        nameLineEdit->setFont(font2);
        nameLineEdit->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
" font-size: 30px;  \n"
" border: 1px solid black;    \n"
" width: 477px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
" height: 50px;  \n"
""));

        horizontalLayout_2->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        joinButton = new QPushButton(homePage);
        joinButton->setObjectName("joinButton");
        sizePolicy.setHeightForWidth(joinButton->sizePolicy().hasHeightForWidth());
        joinButton->setSizePolicy(sizePolicy);
        joinButton->setMinimumSize(QSize(150, 0));
        joinButton->setFont(font2);
        joinButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        joinButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 222px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 50px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    \n"
"    border: 1px solid black;           /* \320\236\320\261\320\262\320\276\320\264\320\272\320\260 \321\207\320\276\321\200\320\275\320\270\320\274 \320\272\320\276\320\273\321\214\320\276\321\200\320\276\320\274 */\n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
"    font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;                   /* \320\240\320\276\320\267\320\274\321\226\321\200 \321\210\321\200\320\270\321\204\321\202\321\203 */\n"
"background: transparent;\n"
" 	background-color: #D9D7D7;         /"
                        "* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    width: 222px;                      /* \320\243\321\202\320\276\321\207\320\275\321\216\321\224\320\274\320\276 \321\200\320\276\320\267\320\274\321\226\321\200 */\n"
"    height: 50px;                      /* \320\243\321\202\320\276\321\207\320\275\321\216\321\224\320\274\320\276 \321\200\320\276\320\267\320\274\321\226\321\200 */\n"
"   background-color: #EBEBEB;             /* \320\227\320\274\321\226\320\275\320\260 \320\272\320\276\320\273\321\214\320\276\321\200\321\203 \321\204\320\276\320\275\321\203 */\n"
"     border: 2px solid white;       \n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;      \n"
"  \n"
"}\n"
""));

        horizontalLayout->addWidget(joinButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        stackedWidget->addWidget(homePage);
        ideaPage = new QWidget();
        ideaPage->setObjectName("ideaPage");
        ideaPage->setAutoFillBackground(false);
        ideaPage->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/moneyBackgroung.png);"));
        verticalLayout_5 = new QVBoxLayout(ideaPage);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(ideaPage);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        widget_3->setMinimumSize(QSize(0, 0));
        widget_3->setStyleSheet(QString::fromUtf8("background: transparent;"));
        horizontalLayout_10 = new QHBoxLayout(widget_3);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 10, 30, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        timeIdeaLabel = new QLabel(widget_3);
        timeIdeaLabel->setObjectName("timeIdeaLabel");
        sizePolicy.setHeightForWidth(timeIdeaLabel->sizePolicy().hasHeightForWidth());
        timeIdeaLabel->setSizePolicy(sizePolicy);
        timeIdeaLabel->setFont(font2);
        timeIdeaLabel->setStyleSheet(QString::fromUtf8("  font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;                   /* \320\240\320\276\320\267\320\274\321\226\321\200 \321\210\321\200\320\270\321\204\321\202\321\203 */\n"
"background: transparent;\n"
""));

        horizontalLayout_10->addWidget(timeIdeaLabel);


        verticalLayout_5->addWidget(widget_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(20, -1, 20, -1);
        topicLabel = new QLabel(ideaPage);
        topicLabel->setObjectName("topicLabel");
        sizePolicy1.setHeightForWidth(topicLabel->sizePolicy().hasHeightForWidth());
        topicLabel->setSizePolicy(sizePolicy1);
        topicLabel->setFont(font2);
        topicLabel->setStyleSheet(QString::fromUtf8("  font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;                   /* \320\240\320\276\320\267\320\274\321\226\321\200 \321\210\321\200\320\270\321\204\321\202\321\203 */\n"
"background: transparent;"));

        verticalLayout_3->addWidget(topicLabel);

        ideaTextEdit = new QTextEdit(ideaPage);
        ideaTextEdit->setObjectName("ideaTextEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ideaTextEdit->sizePolicy().hasHeightForWidth());
        ideaTextEdit->setSizePolicy(sizePolicy2);
        ideaTextEdit->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"font-size: 30px;    \n"
"background-color: rgba(255, 255, 255, 0.8); "));

        verticalLayout_3->addWidget(ideaTextEdit);

        widget_5 = new QWidget(ideaPage);
        widget_5->setObjectName("widget_5");
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMinimumSize(QSize(0, 50));
        widget_5->setStyleSheet(QString::fromUtf8("background: transparent;"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 7, 0, 7);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        quitButton = new QPushButton(widget_5);
        quitButton->setObjectName("quitButton");
        sizePolicy.setHeightForWidth(quitButton->sizePolicy().hasHeightForWidth());
        quitButton->setSizePolicy(sizePolicy);
        quitButton->setMinimumSize(QSize(150, 0));
        quitButton->setFont(font2);
        quitButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        quitButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 150px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 50px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    \n"
"    border: 1px solid black;           /* \320\236\320\261\320\262\320\276\320\264\320\272\320\260 \321\207\320\276\321\200\320\275\320\270\320\274 \320\272\320\276\320\273\321\214\320\276\321\200\320\276\320\274 */\n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
"    font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;                   /* \320\240\320\276\320\267\320\274\321\226\321\200 \321\210\321\200\320\270\321\204\321\202\321\203 */\n"
"	background: transparent;\n"
" 	background-color: #CCCCCC;         "
                        "/* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    width: 150px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 50px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    background-color:#D9D7D7  ;         /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"    border: 2px solid white;           /* \320\236\320\261\320\262\320\276\320\264\320\272\320\260 \321\207\320\276\321\200\320\275\320\270\320\274 \320\272\320\276\320\273\321\214\320\276\321\200\320\276\320\274 */\n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
"    font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
""
                        "    font-size: 30px;       \n"
"}\n"
""));

        horizontalLayout_3->addWidget(quitButton);

        sendButton = new QPushButton(widget_5);
        sendButton->setObjectName("sendButton");
        sizePolicy.setHeightForWidth(sendButton->sizePolicy().hasHeightForWidth());
        sendButton->setSizePolicy(sizePolicy);
        sendButton->setMinimumSize(QSize(150, 0));
        sendButton->setFont(font2);
        sendButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sendButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 150px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 50px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 1px solid black;           /* \320\236\320\261\320\262\320\276\320\264\320\272\320\260 \321\207\320\276\321\200\320\275\320\270\320\274 \320\272\320\276\320\273\321\214\320\276\321\200\320\276\320\274 */\n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
"    font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;                   /* \320\240\320\276\320\267\320\274\321\226\321\200 \321\210\321\200\320\270\321\204\321\202\321\203 */\n"
"	background: transparent;\n"
" 	background-color: #EBEBEB;         /* \320\232"
                        "\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    width: 150px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 50px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    background-color:#D9D7D7  ;         /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"    border: 2px solid white;           /* \320\236\320\261\320\262\320\276\320\264\320\272\320\260 \321\207\320\276\321\200\320\275\320\270\320\274 \320\272\320\276\320\273\321\214\320\276\321\200\320\276\320\274 */\n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
"    font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    fon"
                        "t-size: 30px;       \n"
"}\n"
""));

        horizontalLayout_3->addWidget(sendButton);


        verticalLayout_3->addWidget(widget_5);


        verticalLayout_5->addLayout(verticalLayout_3);

        stackedWidget->addWidget(ideaPage);
        votePage = new QWidget();
        votePage->setObjectName("votePage");
        votePage->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/moneyBackgroung.png);"));
        verticalLayout_9 = new QVBoxLayout(votePage);
        verticalLayout_9->setObjectName("verticalLayout_9");
        widget_4 = new QWidget(votePage);
        widget_4->setObjectName("widget_4");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy3);
        widget_4->setMinimumSize(QSize(0, 0));
        widget_4->setStyleSheet(QString::fromUtf8("background: transparent;"));
        horizontalLayout_11 = new QHBoxLayout(widget_4);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 10, 30, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        timeVoteLabel = new QLabel(widget_4);
        timeVoteLabel->setObjectName("timeVoteLabel");
        sizePolicy.setHeightForWidth(timeVoteLabel->sizePolicy().hasHeightForWidth());
        timeVoteLabel->setSizePolicy(sizePolicy);
        timeVoteLabel->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;  \n"
"background: transparent;\n"
""));

        horizontalLayout_11->addWidget(timeVoteLabel);


        verticalLayout_9->addWidget(widget_4);

        label_4 = new QLabel(votePage);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;  \n"
"background: transparent;\n"
""));

        verticalLayout_9->addWidget(label_4);

        chooseIdeaTableWidget = new QTableWidget(votePage);
        chooseIdeaTableWidget->setObjectName("chooseIdeaTableWidget");
        chooseIdeaTableWidget->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"font-size: 30px;    \n"
"background-color: rgba(255, 255, 255, 0.8); "));

        verticalLayout_9->addWidget(chooseIdeaTableWidget);

        widget_6 = new QWidget(votePage);
        widget_6->setObjectName("widget_6");
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        widget_6->setMinimumSize(QSize(0, 50));
        widget_6->setStyleSheet(QString::fromUtf8("background: transparent;"));
        horizontalLayout_12 = new QHBoxLayout(widget_6);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 7);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);

        sendButton_2 = new QPushButton(widget_6);
        sendButton_2->setObjectName("sendButton_2");
        sizePolicy.setHeightForWidth(sendButton_2->sizePolicy().hasHeightForWidth());
        sendButton_2->setSizePolicy(sizePolicy);
        sendButton_2->setMinimumSize(QSize(150, 0));
        sendButton_2->setFont(font2);
        sendButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        sendButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 150px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 50px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 1px solid black;           /* \320\236\320\261\320\262\320\276\320\264\320\272\320\260 \321\207\320\276\321\200\320\275\320\270\320\274 \320\272\320\276\320\273\321\214\320\276\321\200\320\276\320\274 */\n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
"    font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;                   /* \320\240\320\276\320\267\320\274\321\226\321\200 \321\210\321\200\320\270\321\204\321\202\321\203 */\n"
"	background: transparent;\n"
" 	background-color: #D9D7D7;         /* \320\232"
                        "\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    width: 150px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 50px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"background: transparent;\n"
"    background-color:#EBEBEB  ;         /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"    border: 2px solid white;           /* \320\236\320\261\320\262\320\276\320\264\320\272\320\260 \321\207\320\276\321\200\320\275\320\270\320\274 \320\272\320\276\320\273\321\214\320\276\321\200\320\276\320\274 */\n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
"    font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321"
                        "\204\321\202 */\n"
"    font-size: 30px;       \n"
"}\n"
""));

        horizontalLayout_12->addWidget(sendButton_2);


        verticalLayout_9->addWidget(widget_6);

        stackedWidget->addWidget(votePage);
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/waitPageBackgroung.png);"));
        verticalLayout_10 = new QVBoxLayout(page);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalSpacer_11 = new QSpacerItem(20, 220, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_10->addItem(verticalSpacer_11);

        waitLabel = new QLabel(page);
        waitLabel->setObjectName("waitLabel");
        waitLabel->setFont(font2);
        waitLabel->setAutoFillBackground(false);
        waitLabel->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"font-size: 50px;  \n"
"height: 50px;      \n"
"background: transparent;\n"
""));

        verticalLayout_10->addWidget(waitLabel);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_10);

        stackedWidget->addWidget(page);
        podiumPage = new QWidget();
        podiumPage->setObjectName("podiumPage");
        podiumPage->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/moneyBackgroung.png);"));
        backHomeButton = new QPushButton(podiumPage);
        backHomeButton->setObjectName("backHomeButton");
        backHomeButton->setGeometry(QRect(609, 520, 151, 45));
        sizePolicy.setHeightForWidth(backHomeButton->sizePolicy().hasHeightForWidth());
        backHomeButton->setSizePolicy(sizePolicy);
        backHomeButton->setMinimumSize(QSize(150, 0));
        backHomeButton->setFont(font2);
        backHomeButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backHomeButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    width: 150px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 50px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    border: 1px solid black;           /* \320\236\320\261\320\262\320\276\320\264\320\272\320\260 \321\207\320\276\321\200\320\275\320\270\320\274 \320\272\320\276\320\273\321\214\320\276\321\200\320\276\320\274 */\n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
"    font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;                   /* \320\240\320\276\320\267\320\274\321\226\321\200 \321\210\321\200\320\270\321\204\321\202\321\203 */\n"
"	background: transparent;\n"
" 	background-color: #D9D7D7;         /* \320\232"
                        "\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    width: 150px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 50px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    background-color:#EBEBEB  ;         /* \320\232\320\276\320\273\321\226\321\200 \321\204\320\276\320\275\321\203 */\n"
"    border: 2px solid white;           /* \320\236\320\261\320\262\320\276\320\264\320\272\320\260 \321\207\320\276\321\200\320\275\320\270\320\274 \320\272\320\276\320\273\321\214\320\276\321\200\320\276\320\274 */\n"
"    border-radius: 20px;               /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\217 \320\272\321\200\320\260\321\227\320\262 */\n"
"    font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    fon"
                        "t-size: 30px;       \n"
"}\n"
""));
        labelSecondPlace = new QLabel(podiumPage);
        labelSecondPlace->setObjectName("labelSecondPlace");
        labelSecondPlace->setGeometry(QRect(220, 250, 121, 41));
        labelSecondPlace->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;  \n"
"background: transparent;\n"
""));
        labelFirstPlace = new QLabel(podiumPage);
        labelFirstPlace->setObjectName("labelFirstPlace");
        labelFirstPlace->setGeometry(QRect(350, 220, 121, 41));
        labelFirstPlace->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;  \n"
"background: transparent;\n"
""));
        labelThirdPlace = new QLabel(podiumPage);
        labelThirdPlace->setObjectName("labelThirdPlace");
        labelThirdPlace->setGeometry(QRect(500, 270, 91, 51));
        labelThirdPlace->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;  \n"
"background: transparent;\n"
""));
        labelFirstPlace_2 = new QLabel(podiumPage);
        labelFirstPlace_2->setObjectName("labelFirstPlace_2");
        labelFirstPlace_2->setGeometry(QRect(330, 70, 111, 41));
        labelFirstPlace_2->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;  \n"
"background: transparent;\n"
""));
        labelFirstPlace_3 = new QLabel(podiumPage);
        labelFirstPlace_3->setObjectName("labelFirstPlace_3");
        labelFirstPlace_3->setGeometry(QRect(240, 110, 291, 41));
        labelFirstPlace_3->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;  \n"
"background: transparent;\n"
""));
        label_3 = new QLabel(podiumPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 320, 160, 161));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/res/images/secondPlacePodium.png);\n"
"background: transparent;\n"
"  width: 125px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 135px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */"));
        label_5 = new QLabel(podiumPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 300, 191, 181));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/res/images/firstPlacePodium.png);\n"
"background: transparent;\n"
"  width: 120px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    height: 165px;                      /* \320\222\320\270\321\201\320\276\321\202\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */"));
        label_6 = new QLabel(podiumPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(470, 360, 151, 121));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/res/images/thirdPlacePodium.png);\n"
"background: transparent;"));
        stackedWidget->addWidget(podiumPage);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Enter your name</p></body></html>", nullptr));
        joinButton->setText(QCoreApplication::translate("MainWindow", "Join", nullptr));
        timeIdeaLabel->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        topicLabel->setText(QCoreApplication::translate("MainWindow", "Topic:", nullptr));
        quitButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        timeVoteLabel->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Choose 3 the best ideas</p></body></html>", nullptr));
        sendButton_2->setText(QCoreApplication::translate("MainWindow", "Vote", nullptr));
        waitLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Waiting for others . . .</span></p></body></html>", nullptr));
        backHomeButton->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        labelSecondPlace->setText(QCoreApplication::translate("MainWindow", "TEA", nullptr));
        labelFirstPlace->setText(QCoreApplication::translate("MainWindow", "COFFEE", nullptr));
        labelThirdPlace->setText(QCoreApplication::translate("MainWindow", "JUICE", nullptr));
        labelFirstPlace_2->setText(QCoreApplication::translate("MainWindow", "Results", nullptr));
        labelFirstPlace_3->setText(QCoreApplication::translate("MainWindow", "How to stay survive?", nullptr));
        label_3->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
