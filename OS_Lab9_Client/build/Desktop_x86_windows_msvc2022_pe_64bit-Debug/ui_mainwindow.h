/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.6
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
    QLineEdit *nameJoinLineEdit;
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
    QLabel *timeImgIdea;
    QVBoxLayout *verticalLayout_3;
    QLabel *topicIdeaLabel;
    QTextEdit *createIdeaTextEdit;
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
    QLabel *timeImgVote;
    QLabel *label_4;
    QTableWidget *chooseIdeaTableWidget;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *voteButton;
    QWidget *waitPage;
    QVBoxLayout *verticalLayout_10;
    QWidget *nameWidget;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_12;
    QLabel *nameWaitImgLabel;
    QLabel *nameWaitLabel;
    QSpacerItem *verticalSpacer_5;
    QLabel *waitLabel;
    QSpacerItem *verticalSpacer_10;
    QWidget *podiumPage;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_22;
    QLabel *label_22;
    QSpacerItem *verticalSpacer_17;
    QLabel *label_23;
    QLabel *label_24;
    QSpacerItem *verticalSpacer_18;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_17;
    QSpacerItem *horizontalSpacer_15;
    QVBoxLayout *verticalLayout_24;
    QSpacerItem *verticalSpacer_19;
    QLabel *label_25;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_16;
    QVBoxLayout *verticalLayout_25;
    QSpacerItem *verticalSpacer_20;
    QLabel *label_27;
    QLabel *label_28;
    QSpacerItem *horizontalSpacer_17;
    QVBoxLayout *verticalLayout_26;
    QSpacerItem *verticalSpacer_21;
    QLabel *label_29;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_15;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *homeButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 636);
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
        nameJoinLineEdit = new QLineEdit(homePage);
        nameJoinLineEdit->setObjectName("nameJoinLineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameJoinLineEdit->sizePolicy().hasHeightForWidth());
        nameJoinLineEdit->setSizePolicy(sizePolicy);
        nameJoinLineEdit->setMinimumSize(QSize(400, 0));
        nameJoinLineEdit->setFont(font2);
        nameJoinLineEdit->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
" font-size: 30px;  \n"
" border: 1px solid black;    \n"
" width: 477px;                      /* \320\250\320\270\321\200\320\270\320\275\320\260 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
" height: 50px;  \n"
""));

        horizontalLayout_2->addWidget(nameJoinLineEdit);


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
        joinButton->setCursor(QCursor(Qt::PointingHandCursor));
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
        horizontalLayout_10->setContentsMargins(0, 20, 20, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        timeIdeaLabel = new QLabel(widget_3);
        timeIdeaLabel->setObjectName("timeIdeaLabel");
        sizePolicy.setHeightForWidth(timeIdeaLabel->sizePolicy().hasHeightForWidth());
        timeIdeaLabel->setSizePolicy(sizePolicy);
        timeIdeaLabel->setMinimumSize(QSize(100, 0));
        timeIdeaLabel->setFont(font2);
        timeIdeaLabel->setStyleSheet(QString::fromUtf8("  font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;                   /* \320\240\320\276\320\267\320\274\321\226\321\200 \321\210\321\200\320\270\321\204\321\202\321\203 */\n"
"background: transparent;\n"
""));

        horizontalLayout_10->addWidget(timeIdeaLabel);

        timeImgIdea = new QLabel(widget_3);
        timeImgIdea->setObjectName("timeImgIdea");
        sizePolicy.setHeightForWidth(timeImgIdea->sizePolicy().hasHeightForWidth());
        timeImgIdea->setSizePolicy(sizePolicy);
        timeImgIdea->setMinimumSize(QSize(30, 0));
        timeImgIdea->setStyleSheet(QString::fromUtf8("image: url(:/res/images/clock.png);\n"
"    font-size: 20px;  "));

        horizontalLayout_10->addWidget(timeImgIdea);


        verticalLayout_5->addWidget(widget_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(20, -1, 20, 0);
        topicIdeaLabel = new QLabel(ideaPage);
        topicIdeaLabel->setObjectName("topicIdeaLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(topicIdeaLabel->sizePolicy().hasHeightForWidth());
        topicIdeaLabel->setSizePolicy(sizePolicy2);
        topicIdeaLabel->setMinimumSize(QSize(0, 46));
        topicIdeaLabel->setFont(font2);
        topicIdeaLabel->setStyleSheet(QString::fromUtf8("  font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;                   /* \320\240\320\276\320\267\320\274\321\226\321\200 \321\210\321\200\320\270\321\204\321\202\321\203 */\n"
"background: transparent;"));

        verticalLayout_3->addWidget(topicIdeaLabel);

        createIdeaTextEdit = new QTextEdit(ideaPage);
        createIdeaTextEdit->setObjectName("createIdeaTextEdit");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(createIdeaTextEdit->sizePolicy().hasHeightForWidth());
        createIdeaTextEdit->setSizePolicy(sizePolicy3);
        createIdeaTextEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(createIdeaTextEdit);

        widget_5 = new QWidget(ideaPage);
        widget_5->setObjectName("widget_5");
        sizePolicy1.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy1);
        widget_5->setMinimumSize(QSize(0, 50));
        widget_5->setStyleSheet(QString::fromUtf8("background: transparent;"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 20, 20, 20);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        quitButton = new QPushButton(widget_5);
        quitButton->setObjectName("quitButton");
        sizePolicy.setHeightForWidth(quitButton->sizePolicy().hasHeightForWidth());
        quitButton->setSizePolicy(sizePolicy);
        quitButton->setMinimumSize(QSize(150, 0));
        quitButton->setFont(font2);
        quitButton->setCursor(QCursor(Qt::PointingHandCursor));
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
        sendButton->setCursor(QCursor(Qt::PointingHandCursor));
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
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(20, 0, 20, 0);
        widget_4 = new QWidget(votePage);
        widget_4->setObjectName("widget_4");
        sizePolicy2.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy2);
        widget_4->setMinimumSize(QSize(0, 0));
        widget_4->setStyleSheet(QString::fromUtf8("background: transparent;"));
        horizontalLayout_11 = new QHBoxLayout(widget_4);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 20, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        timeVoteLabel = new QLabel(widget_4);
        timeVoteLabel->setObjectName("timeVoteLabel");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(timeVoteLabel->sizePolicy().hasHeightForWidth());
        timeVoteLabel->setSizePolicy(sizePolicy4);
        timeVoteLabel->setMinimumSize(QSize(100, 0));
        timeVoteLabel->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"    font-size: 30px;  \n"
"background: transparent;\n"
""));

        horizontalLayout_11->addWidget(timeVoteLabel);

        timeImgVote = new QLabel(widget_4);
        timeImgVote->setObjectName("timeImgVote");
        sizePolicy.setHeightForWidth(timeImgVote->sizePolicy().hasHeightForWidth());
        timeImgVote->setSizePolicy(sizePolicy);
        timeImgVote->setMinimumSize(QSize(30, 0));
        timeImgVote->setStyleSheet(QString::fromUtf8("image: url(:/res/images/clock.png);\n"
"    font-size: 20px;  "));

        horizontalLayout_11->addWidget(timeImgVote);


        verticalLayout_9->addWidget(widget_4);

        label_4 = new QLabel(votePage);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 46));
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
        horizontalLayout_12->setContentsMargins(0, 20, 20, 20);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_4);

        voteButton = new QPushButton(widget_6);
        voteButton->setObjectName("voteButton");
        sizePolicy.setHeightForWidth(voteButton->sizePolicy().hasHeightForWidth());
        voteButton->setSizePolicy(sizePolicy);
        voteButton->setMinimumSize(QSize(150, 0));
        voteButton->setFont(font2);
        voteButton->setCursor(QCursor(Qt::PointingHandCursor));
        voteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_12->addWidget(voteButton);


        verticalLayout_9->addWidget(widget_6);

        stackedWidget->addWidget(votePage);
        waitPage = new QWidget();
        waitPage->setObjectName("waitPage");
        waitPage->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/waitPageBackgroung.png);"));
        verticalLayout_10 = new QVBoxLayout(waitPage);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        nameWidget = new QWidget(waitPage);
        nameWidget->setObjectName("nameWidget");
        sizePolicy1.setHeightForWidth(nameWidget->sizePolicy().hasHeightForWidth());
        nameWidget->setSizePolicy(sizePolicy1);
        nameWidget->setMinimumSize(QSize(100, 50));
        nameWidget->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        nameWidget->setStyleSheet(QString::fromUtf8("height: 100px;      \n"
"background: transparent;"));
        verticalLayout_4 = new QVBoxLayout(nameWidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_12);

        nameWaitImgLabel = new QLabel(nameWidget);
        nameWaitImgLabel->setObjectName("nameWaitImgLabel");
        sizePolicy2.setHeightForWidth(nameWaitImgLabel->sizePolicy().hasHeightForWidth());
        nameWaitImgLabel->setSizePolicy(sizePolicy2);
        nameWaitImgLabel->setMinimumSize(QSize(60, 0));
        nameWaitImgLabel->setStyleSheet(QString::fromUtf8("image: url(:/res/images/ICON_BW.png);\n"
"    font-size: 90px;  "));

        verticalLayout_4->addWidget(nameWaitImgLabel);

        nameWaitLabel = new QLabel(nameWidget);
        nameWaitLabel->setObjectName("nameWaitLabel");
        nameWaitLabel->setStyleSheet(QString::fromUtf8("    font-size: 30px;  "));
        nameWaitLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(nameWaitLabel);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);


        verticalLayout_10->addWidget(nameWidget);

        waitLabel = new QLabel(waitPage);
        waitLabel->setObjectName("waitLabel");
        waitLabel->setFont(font2);
        waitLabel->setAutoFillBackground(false);
        waitLabel->setStyleSheet(QString::fromUtf8(" font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"font-size: 40px;  \n"
"height: 50px;      \n"
"background: transparent;\n"
""));

        verticalLayout_10->addWidget(waitLabel);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_10);

        stackedWidget->addWidget(waitPage);
        podiumPage = new QWidget();
        podiumPage->setObjectName("podiumPage");
        podiumPage->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/moneyBackgroung.png);"));
        verticalLayout_6 = new QVBoxLayout(podiumPage);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(20, 0, 20, 0);
        verticalSpacer_22 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_22);

        label_22 = new QLabel(podiumPage);
        label_22->setObjectName("label_22");
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);
        label_22->setMinimumSize(QSize(0, 0));
        label_22->setMaximumSize(QSize(16777215, 80));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Julius Sans One")});
        font3.setBold(true);
        font3.setItalic(false);
        label_22->setFont(font3);
        label_22->setAutoFillBackground(false);
        label_22->setStyleSheet(QString::fromUtf8("font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"image: url(:/res/images/logo.png);\n"
"font-size: 50px;  \n"
"background: transparent;"));

        verticalLayout_6->addWidget(label_22);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_17);

        label_23 = new QLabel(podiumPage);
        label_23->setObjectName("label_23");
        sizePolicy1.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy1);
        label_23->setFont(font2);
        label_23->setStyleSheet(QString::fromUtf8("font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"font-size: 30px;  \n"
"background: transparent;\n"
""));
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_23);

        label_24 = new QLabel(podiumPage);
        label_24->setObjectName("label_24");
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);
        label_24->setFont(font2);
        label_24->setStyleSheet(QString::fromUtf8("font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"font-size: 30px;  \n"
"background: transparent;\n"
""));
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_24);

        verticalSpacer_18 = new QSpacerItem(20, 24, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_18);

        widget_14 = new QWidget(podiumPage);
        widget_14->setObjectName("widget_14");
        sizePolicy2.setHeightForWidth(widget_14->sizePolicy().hasHeightForWidth());
        widget_14->setSizePolicy(sizePolicy2);
        widget_14->setMinimumSize(QSize(0, 300));
        widget_14->setStyleSheet(QString::fromUtf8("background: transparent;"));
        horizontalLayout_17 = new QHBoxLayout(widget_14);
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_15);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalSpacer_19 = new QSpacerItem(80, 80, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_24->addItem(verticalSpacer_19);

        label_25 = new QLabel(widget_14);
        label_25->setObjectName("label_25");
        sizePolicy1.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy1);
        label_25->setMinimumSize(QSize(200, 0));
        label_25->setStyleSheet(QString::fromUtf8("font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"font-size: 20px;  \n"
"background: transparent;\n"
""));
        label_25->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_25->setWordWrap(true);

        verticalLayout_24->addWidget(label_25);

        label_26 = new QLabel(widget_14);
        label_26->setObjectName("label_26");
        sizePolicy1.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy1);
        label_26->setMinimumSize(QSize(120, 135));
        label_26->setFont(font);
        label_26->setStyleSheet(QString::fromUtf8("image: url(:/res/images/secondPlacePodium.png);"));

        verticalLayout_24->addWidget(label_26);


        horizontalLayout_17->addLayout(verticalLayout_24);

        horizontalSpacer_16 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_25->addItem(verticalSpacer_20);

        label_27 = new QLabel(widget_14);
        label_27->setObjectName("label_27");
        sizePolicy1.setHeightForWidth(label_27->sizePolicy().hasHeightForWidth());
        label_27->setSizePolicy(sizePolicy1);
        label_27->setMinimumSize(QSize(200, 0));
        label_27->setStyleSheet(QString::fromUtf8("font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"font-size: 20px;  \n"
"background: transparent;\n"
""));
        label_27->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_27->setWordWrap(true);

        verticalLayout_25->addWidget(label_27);

        label_28 = new QLabel(widget_14);
        label_28->setObjectName("label_28");
        sizePolicy1.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy1);
        label_28->setMinimumSize(QSize(120, 165));
        label_28->setStyleSheet(QString::fromUtf8("image: url(:/res/images/firstPlacePodium.png);"));

        verticalLayout_25->addWidget(label_28);


        horizontalLayout_17->addLayout(verticalLayout_25);

        horizontalSpacer_17 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_17);

        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalSpacer_21 = new QSpacerItem(80, 110, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout_26->addItem(verticalSpacer_21);

        label_29 = new QLabel(widget_14);
        label_29->setObjectName("label_29");
        sizePolicy1.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy1);
        label_29->setMinimumSize(QSize(200, 0));
        label_29->setStyleSheet(QString::fromUtf8("font-family: 'Julius Sans One', sans-serif; /* \320\250\321\200\320\270\321\204\321\202 */\n"
"font-size: 20px;  \n"
"background: transparent;\n"
""));
        label_29->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_29->setWordWrap(true);

        verticalLayout_26->addWidget(label_29);

        label_30 = new QLabel(widget_14);
        label_30->setObjectName("label_30");
        sizePolicy1.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy1);
        label_30->setMinimumSize(QSize(120, 105));
        label_30->setFont(font);
        label_30->setStyleSheet(QString::fromUtf8("image: url(:/res/images/thirdPlacePodium.png);\n"
""));

        verticalLayout_26->addWidget(label_30);


        horizontalLayout_17->addLayout(verticalLayout_26);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_18);


        verticalLayout_6->addWidget(widget_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(-1, 20, 20, 20);
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);

        homeButton_2 = new QPushButton(podiumPage);
        homeButton_2->setObjectName("homeButton_2");
        sizePolicy.setHeightForWidth(homeButton_2->sizePolicy().hasHeightForWidth());
        homeButton_2->setSizePolicy(sizePolicy);
        homeButton_2->setMinimumSize(QSize(150, 0));
        homeButton_2->setFont(font2);
        homeButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        homeButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_15->addWidget(homeButton_2);


        verticalLayout_6->addLayout(horizontalLayout_15);

        stackedWidget->addWidget(podiumPage);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(nameJoinLineEdit, &QLineEdit::returnPressed, joinButton, qOverload<>(&QPushButton::click));

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
        timeImgIdea->setText(QString());
        topicIdeaLabel->setText(QCoreApplication::translate("MainWindow", "Topic:", nullptr));
        quitButton->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        timeVoteLabel->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        timeImgVote->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Choose 3 the best ideas</p></body></html>", nullptr));
        voteButton->setText(QCoreApplication::translate("MainWindow", "Vote", nullptr));
        nameWaitImgLabel->setText(QString());
        nameWaitLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        waitLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">Waiting for others . . .</span></p></body></html>", nullptr));
        label_22->setText(QString());
        label_23->setText(QCoreApplication::translate("MainWindow", "Top 3 ideas:", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "How to stay survive?", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "erjteyjety jetyjejet", nullptr));
        label_26->setText(QString());
        label_27->setText(QCoreApplication::translate("MainWindow", "dtykfjrtsje\321\203\320\260\320\272\320\277\320\272\320\265\321\200\320\265\320\275\321\200\320\274\320\272\320\260tyjetyj etyjetjyt", nullptr));
        label_28->setText(QString());
        label_29->setText(QCoreApplication::translate("MainWindow", "JUICjetj etjertjejrE", nullptr));
        label_30->setText(QString());
        homeButton_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
