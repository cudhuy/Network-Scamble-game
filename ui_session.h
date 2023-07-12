/********************************************************************************
** Form generated from reading UI file 'session.ui'
**
** Created by: Qt User Interface Compiler
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSION_H
#define UI_SESSION_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Session
{
public:
    QAction *actionNew_Game;
    QAction *actionBack;
    QAction *actionRules_of_the_Game;
    QAction *actionSend_a_Review;
    QAction *actionAuthor;
    QAction *actionControls;
    QWidget *centralWidget;
    QPushButton *newGameButton;
    QLabel *sessionScoreLabel;
    QLabel *label_2;
    QPushButton *letterButton_3;
    QPushButton *submitButton;
    QPushButton *letterButton_6;
    QLabel *letterScore_8;
    QLabel *letterScore_9;
    QLabel *letterScore_7;
    QTreeWidget *treeWidget;
    QPushButton *letterButton_10;
    QPushButton *letterButton_7;
    QFrame *line_2;
    QLabel *letterScore_10;
    QLabel *sessionLabel;
    QLabel *correctnessLabel;
    QFrame *line_4;
    QLabel *timeLabel;
    QLabel *letterScore_5;
    QPushButton *letterButton_8;
    QPushButton *letterButton_9;
    QLabel *letterScore_1;
    QPushButton *letterButton_2;
    QLabel *label_3;
    QPushButton *letterButton_4;
    QPushButton *letterButton_5;
    QPushButton *letterButton_1;
    QLabel *letterScore_2;
    QLineEdit *lineEdit;
    QPushButton *clearAllButton;
    QFrame *line_3;
    QLabel *letterScore_4;
    QPushButton *clearOneButton;
    QFrame *line;
    QLabel *letterScore_3;
    QLabel *letterScore_6;
    QLabel *highScoreLabel;
    QCommandLinkButton *backLink;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Session)
    {
        if (Session->objectName().isEmpty())
            Session->setObjectName(QStringLiteral("Session"));
        Session->resize(557, 650);
        QIcon icon;
        icon.addFile(QStringLiteral("C:/Program Files (x86)/CodeBlocks/share/CodeBlocks/templates/wizard/plugins/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        Session->setWindowIcon(icon);
        Session->setLocale(QLocale(QLocale::English, QLocale::Cameroon));
        actionNew_Game = new QAction(Session);
        actionNew_Game->setObjectName(QStringLiteral("actionNew_Game"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("C:/Qt/Qt5.0.2/5.0.2/mingw47_32/examples/widgets/graphicsview/chip/rotateleft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_Game->setIcon(icon1);
        actionBack = new QAction(Session);
        actionBack->setObjectName(QStringLiteral("actionBack"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/exit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon2);
        actionRules_of_the_Game = new QAction(Session);
        actionRules_of_the_Game->setObjectName(QStringLiteral("actionRules_of_the_Game"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRules_of_the_Game->setIcon(icon3);
        actionSend_a_Review = new QAction(Session);
        actionSend_a_Review->setObjectName(QStringLiteral("actionSend_a_Review"));
        actionAuthor = new QAction(Session);
        actionAuthor->setObjectName(QStringLiteral("actionAuthor"));
        actionControls = new QAction(Session);
        actionControls->setObjectName(QStringLiteral("actionControls"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/controls.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionControls->setIcon(icon4);
        centralWidget = new QWidget(Session);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        newGameButton = new QPushButton(centralWidget);
        newGameButton->setObjectName(QStringLiteral("newGameButton"));
        newGameButton->setGeometry(QRect(177, 530, 75, 31));
        newGameButton->setIcon(icon1);
        sessionScoreLabel = new QLabel(centralWidget);
        sessionScoreLabel->setObjectName(QStringLiteral("sessionScoreLabel"));
        sessionScoreLabel->setGeometry(QRect(17, 190, 261, 35));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(20);
        sessionScoreLabel->setFont(font);
        sessionScoreLabel->setStyleSheet(QStringLiteral("color: green;"));
        sessionScoreLabel->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(287, 190, 150, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        letterButton_3 = new QPushButton(centralWidget);
        letterButton_3->setObjectName(QStringLiteral("letterButton_3"));
        letterButton_3->setGeometry(QRect(122, 280, 50, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Consolas"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        letterButton_3->setFont(font2);
        submitButton = new QPushButton(centralWidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(97, 470, 75, 31));
        QIcon icon5;
        icon5.addFile(QStringLiteral("C:/Qt/Qt5.0.2/5.0.2/mingw47_32/examples/widgets/tools/undo/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        submitButton->setIcon(icon5);
        letterButton_6 = new QPushButton(centralWidget);
        letterButton_6->setObjectName(QStringLiteral("letterButton_6"));
        letterButton_6->setGeometry(QRect(275, 280, 50, 50));
        letterButton_6->setFont(font2);
        letterScore_8 = new QLabel(centralWidget);
        letterScore_8->setObjectName(QStringLiteral("letterScore_8"));
        letterScore_8->setGeometry(QRect(392, 330, 20, 20));
        QFont font3;
        font3.setPointSize(12);
        letterScore_8->setFont(font3);
        letterScore_8->setAlignment(Qt::AlignCenter);
        letterScore_9 = new QLabel(centralWidget);
        letterScore_9->setObjectName(QStringLiteral("letterScore_9"));
        letterScore_9->setGeometry(QRect(444, 330, 20, 20));
        letterScore_9->setFont(font3);
        letterScore_9->setAlignment(Qt::AlignCenter);
        letterScore_7 = new QLabel(centralWidget);
        letterScore_7->setObjectName(QStringLiteral("letterScore_7"));
        letterScore_7->setGeometry(QRect(341, 330, 20, 20));
        letterScore_7->setFont(font3);
        letterScore_7->setAlignment(Qt::AlignCenter);
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignRight|Qt::AlignVCenter);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setTextAlignment(1, Qt::AlignLeft|Qt::AlignVCenter);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignRight|Qt::AlignVCenter);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem2->setTextAlignment(0, Qt::AlignRight|Qt::AlignVCenter);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem3->setTextAlignment(0, Qt::AlignRight|Qt::AlignVCenter);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(287, 380, 256, 220));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy);
        treeWidget->setFont(font1);
        treeWidget->setLineWidth(5);
        treeWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidget->setWordWrap(true);
        treeWidget->setColumnCount(2);
        treeWidget->header()->setCascadingSectionResizes(true);
        treeWidget->header()->setDefaultSectionSize(185);
        treeWidget->header()->setMinimumSectionSize(10);
        letterButton_10 = new QPushButton(centralWidget);
        letterButton_10->setObjectName(QStringLiteral("letterButton_10"));
        letterButton_10->setGeometry(QRect(482, 280, 50, 50));
        letterButton_10->setFont(font2);
        letterButton_7 = new QPushButton(centralWidget);
        letterButton_7->setObjectName(QStringLiteral("letterButton_7"));
        letterButton_7->setGeometry(QRect(326, 280, 50, 50));
        letterButton_7->setFont(font2);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(7, 240, 540, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        letterScore_10 = new QLabel(centralWidget);
        letterScore_10->setObjectName(QStringLiteral("letterScore_10"));
        letterScore_10->setGeometry(QRect(496, 330, 20, 20));
        letterScore_10->setFont(font3);
        letterScore_10->setAlignment(Qt::AlignCenter);
        sessionLabel = new QLabel(centralWidget);
        sessionLabel->setObjectName(QStringLiteral("sessionLabel"));
        sessionLabel->setGeometry(QRect(7, 10, 370, 120));
        sessionLabel->setFont(font2);
        sessionLabel->setAlignment(Qt::AlignCenter);
        correctnessLabel = new QLabel(centralWidget);
        correctnessLabel->setObjectName(QStringLiteral("correctnessLabel"));
        correctnessLabel->setGeometry(QRect(17, 380, 240, 30));
        QFont font4;
        font4.setFamily(QStringLiteral("Consolas"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        correctnessLabel->setFont(font4);
        correctnessLabel->setAlignment(Qt::AlignCenter);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(547, 180, 3, 61));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        timeLabel = new QLabel(centralWidget);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setGeometry(QRect(437, 190, 90, 35));
        timeLabel->setFont(font);
        timeLabel->setStyleSheet(QLatin1String("color: rgb(255, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));
        timeLabel->setAlignment(Qt::AlignCenter);
        letterScore_5 = new QLabel(centralWidget);
        letterScore_5->setObjectName(QStringLiteral("letterScore_5"));
        letterScore_5->setGeometry(QRect(238, 330, 20, 20));
        letterScore_5->setFont(font3);
        letterScore_5->setAlignment(Qt::AlignCenter);
        letterButton_8 = new QPushButton(centralWidget);
        letterButton_8->setObjectName(QStringLiteral("letterButton_8"));
        letterButton_8->setGeometry(QRect(377, 280, 50, 50));
        letterButton_8->setFont(font2);
        letterButton_9 = new QPushButton(centralWidget);
        letterButton_9->setObjectName(QStringLiteral("letterButton_9"));
        letterButton_9->setGeometry(QRect(429, 280, 50, 50));
        letterButton_9->setFont(font2);
        letterScore_1 = new QLabel(centralWidget);
        letterScore_1->setObjectName(QStringLiteral("letterScore_1"));
        letterScore_1->setGeometry(QRect(33, 330, 20, 20));
        letterScore_1->setFont(font3);
        letterScore_1->setAlignment(Qt::AlignCenter);
        letterButton_2 = new QPushButton(centralWidget);
        letterButton_2->setObjectName(QStringLiteral("letterButton_2"));
        letterButton_2->setGeometry(QRect(70, 280, 50, 50));
        letterButton_2->setFont(font2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-3, 250, 551, 31));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        letterButton_4 = new QPushButton(centralWidget);
        letterButton_4->setObjectName(QStringLiteral("letterButton_4"));
        letterButton_4->setGeometry(QRect(173, 280, 50, 50));
        letterButton_4->setFont(font2);
        letterButton_5 = new QPushButton(centralWidget);
        letterButton_5->setObjectName(QStringLiteral("letterButton_5"));
        letterButton_5->setGeometry(QRect(224, 280, 50, 50));
        letterButton_5->setFont(font2);
        letterButton_1 = new QPushButton(centralWidget);
        letterButton_1->setObjectName(QStringLiteral("letterButton_1"));
        letterButton_1->setGeometry(QRect(18, 280, 50, 50));
        letterButton_1->setFont(font2);
        letterScore_2 = new QLabel(centralWidget);
        letterScore_2->setObjectName(QStringLiteral("letterScore_2"));
        letterScore_2->setGeometry(QRect(85, 330, 20, 20));
        letterScore_2->setFont(font3);
        letterScore_2->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(17, 419, 241, 41));
        lineEdit->setFont(font);
        lineEdit->setInputMethodHints(Qt::ImhUppercaseOnly);
        clearAllButton = new QPushButton(centralWidget);
        clearAllButton->setObjectName(QStringLiteral("clearAllButton"));
        clearAllButton->setGeometry(QRect(97, 530, 75, 31));
        QIcon icon6;
        icon6.addFile(QStringLiteral("C:/Qt/Qt5.0.2/5.0.2/mingw47_32/examples/widgets/mainwindows/dockwidgets/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearAllButton->setIcon(icon6);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(7, 180, 3, 61));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        letterScore_4 = new QLabel(centralWidget);
        letterScore_4->setObjectName(QStringLiteral("letterScore_4"));
        letterScore_4->setGeometry(QRect(187, 330, 20, 20));
        letterScore_4->setFont(font3);
        letterScore_4->setAlignment(Qt::AlignCenter);
        clearOneButton = new QPushButton(centralWidget);
        clearOneButton->setObjectName(QStringLiteral("clearOneButton"));
        clearOneButton->setGeometry(QRect(17, 530, 75, 31));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(7, 170, 540, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        letterScore_3 = new QLabel(centralWidget);
        letterScore_3->setObjectName(QStringLiteral("letterScore_3"));
        letterScore_3->setGeometry(QRect(136, 330, 20, 20));
        letterScore_3->setFont(font3);
        letterScore_3->setAlignment(Qt::AlignCenter);
        letterScore_6 = new QLabel(centralWidget);
        letterScore_6->setObjectName(QStringLiteral("letterScore_6"));
        letterScore_6->setGeometry(QRect(290, 330, 20, 20));
        letterScore_6->setFont(font3);
        letterScore_6->setAlignment(Qt::AlignCenter);
        highScoreLabel = new QLabel(centralWidget);
        highScoreLabel->setObjectName(QStringLiteral("highScoreLabel"));
        highScoreLabel->setGeometry(QRect(110, 140, 261, 30));
        QFont font5;
        font5.setPointSize(15);
        highScoreLabel->setFont(font5);
        highScoreLabel->setAlignment(Qt::AlignCenter);
        backLink = new QCommandLinkButton(centralWidget);
        backLink->setObjectName(QStringLiteral("backLink"));
        backLink->setGeometry(QRect(10, 140, 100, 30));
        backLink->setIcon(icon2);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(380, 10, 170, 160));
        graphicsView->setStyleSheet(QLatin1String("background-image:url(\"D:/Documents/MyPrograms/QT/build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/default_profile_picture.png\");\n"
"\n"
""));
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        Session->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Session);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 557, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        Session->setMenuBar(menuBar);
        statusBar = new QStatusBar(Session);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Session->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        letterScore_8->setBuddy(letterButton_8);
        letterScore_9->setBuddy(letterButton_9);
        letterScore_7->setBuddy(letterButton_7);
        letterScore_10->setBuddy(letterButton_10);
        letterScore_5->setBuddy(letterButton_5);
        letterScore_1->setBuddy(letterButton_1);
        letterScore_2->setBuddy(letterButton_2);
        letterScore_4->setBuddy(letterButton_4);
        letterScore_3->setBuddy(letterButton_3);
        letterScore_6->setBuddy(letterButton_6);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew_Game);
        menuFile->addAction(actionBack);
        menuHelp->addAction(actionRules_of_the_Game);
        menuHelp->addAction(actionControls);
        menuAbout->addAction(actionSend_a_Review);
        menuAbout->addAction(actionAuthor);

        retranslateUi(Session);

        QMetaObject::connectSlotsByName(Session);
    } // setupUi

    void retranslateUi(QMainWindow *Session)
    {
        Session->setWindowTitle(QApplication::translate("Session", "Session", 0));
        actionNew_Game->setText(QApplication::translate("Session", "New Game", 0));
        actionNew_Game->setShortcut(QApplication::translate("Session", "Ctrl+N", 0));
        actionBack->setText(QApplication::translate("Session", "Back", 0));
        actionBack->setShortcut(QApplication::translate("Session", "Esc", 0));
        actionRules_of_the_Game->setText(QApplication::translate("Session", "Rules of the Game!", 0));
        actionSend_a_Review->setText(QApplication::translate("Session", "Send a Review", 0));
        actionAuthor->setText(QApplication::translate("Session", "Author", 0));
        actionControls->setText(QApplication::translate("Session", "Controls", 0));
        newGameButton->setText(QApplication::translate("Session", "New Game", 0));
        sessionScoreLabel->setText(QApplication::translate("Session", "0", 0));
        label_2->setText(QApplication::translate("Session", "Time Left:", 0));
        letterButton_3->setText(QApplication::translate("Session", "G", 0));
        submitButton->setText(QApplication::translate("Session", "Submit", 0));
        letterButton_6->setText(QApplication::translate("Session", "E", 0));
        letterScore_8->setText(QApplication::translate("Session", "10", 0));
        letterScore_9->setText(QApplication::translate("Session", "1", 0));
        letterScore_7->setText(QApplication::translate("Session", "1", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Session", "POINTS", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("Session", "WORDS", 0));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("Session", "6", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Session", "BEAST", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(1, QApplication::translate("Session", "16", 0));
        ___qtreewidgetitem2->setText(0, QApplication::translate("Session", "EXACT", 0));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(1, QApplication::translate("Session", "5", 0));
        ___qtreewidgetitem3->setText(0, QApplication::translate("Session", "STAB", 0));
        treeWidget->setSortingEnabled(__sortingEnabled);

        letterButton_10->setText(QApplication::translate("Session", "C", 0));
        letterButton_7->setText(QApplication::translate("Session", "S", 0));
        letterScore_10->setText(QApplication::translate("Session", "3", 0));
        sessionLabel->setText(QApplication::translate("Session", "<html><head/><body><p>Jumble <br/> <span style=\" color:#0000ff;\">GUEST</span></p></body></html>", 0));
        correctnessLabel->setText(QString());
        timeLabel->setText(QApplication::translate("Session", "0", 0));
        letterScore_5->setText(QApplication::translate("Session", "1", 0));
        letterButton_8->setText(QApplication::translate("Session", "X", 0));
        letterButton_9->setText(QApplication::translate("Session", "T", 0));
        letterScore_1->setText(QApplication::translate("Session", "2", 0));
        letterButton_2->setText(QApplication::translate("Session", "E", 0));
        label_3->setText(QApplication::translate("Session", "How many words can you form with the following letters?", 0));
        letterButton_4->setText(QApplication::translate("Session", "B", 0));
        letterButton_5->setText(QApplication::translate("Session", "A", 0));
        letterButton_1->setText(QApplication::translate("Session", "W", 0));
        letterScore_2->setText(QApplication::translate("Session", "1", 0));
        clearAllButton->setText(QApplication::translate("Session", "Clear All", 0));
        letterScore_4->setText(QApplication::translate("Session", "2", 0));
        clearOneButton->setText(QApplication::translate("Session", "Clear One", 0));
        letterScore_3->setText(QApplication::translate("Session", "2", 0));
        letterScore_6->setText(QApplication::translate("Session", "1", 0));
        highScoreLabel->setText(QApplication::translate("Session", "<html><head/><body><p><br/></p></body></html>", 0));
        backLink->setText(QApplication::translate("Session", "Back", 0));
        menuFile->setTitle(QApplication::translate("Session", "File", 0));
        menuHelp->setTitle(QApplication::translate("Session", "Help", 0));
        menuAbout->setTitle(QApplication::translate("Session", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class Session: public Ui_Session {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSION_H
