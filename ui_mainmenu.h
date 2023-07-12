/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QAction *actionPlay_as_Guest;
    QAction *actionSign_Up;
    QAction *actionLog_In;
    QAction *actionRules_of_the_Game;
    QAction *actionControls;
    QAction *actionReview_this_Game;
    QAction *actionAuthor;
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *sessionLabel;
    QTabWidget *tabWidget;
    QListWidget *listWidget;
    QPushButton *guestButton;
    QPushButton *signUpButton;
    QPushButton *logInButton;
    QLabel *guestLabel;
    QLabel *signUpLabel;
    QLabel *logInLabel;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->setEnabled(true);
        MainMenu->resize(557, 650);
        QIcon icon;
        icon.addFile(QStringLiteral("C:/Program Files (x86)/CodeBlocks/share/CodeBlocks/templates/wizard/plugins/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainMenu->setWindowIcon(icon);
        MainMenu->setStyleSheet(QStringLiteral("geometry: 380, 10;"));
        actionPlay_as_Guest = new QAction(MainMenu);
        actionPlay_as_Guest->setObjectName(QStringLiteral("actionPlay_as_Guest"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/guest.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay_as_Guest->setIcon(icon1);
        actionSign_Up = new QAction(MainMenu);
        actionSign_Up->setObjectName(QStringLiteral("actionSign_Up"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/signup.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSign_Up->setIcon(icon2);
        actionLog_In = new QAction(MainMenu);
        actionLog_In->setObjectName(QStringLiteral("actionLog_In"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/login.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLog_In->setIcon(icon3);
        actionRules_of_the_Game = new QAction(MainMenu);
        actionRules_of_the_Game->setObjectName(QStringLiteral("actionRules_of_the_Game"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/help.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRules_of_the_Game->setIcon(icon4);
        actionControls = new QAction(MainMenu);
        actionControls->setObjectName(QStringLiteral("actionControls"));
        QIcon icon5;
        icon5.addFile(QStringLiteral("../build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/controls.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionControls->setIcon(icon5);
        actionReview_this_Game = new QAction(MainMenu);
        actionReview_this_Game->setObjectName(QStringLiteral("actionReview_this_Game"));
        actionAuthor = new QAction(MainMenu);
        actionAuthor->setObjectName(QStringLiteral("actionAuthor"));
        actionExit = new QAction(MainMenu);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("../build-Jumble-Desktop_Qt_5_4_1_MSVC2012_OpenGL_32bit-Release/icons/exit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon6);
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sessionLabel = new QLabel(centralwidget);
        sessionLabel->setObjectName(QStringLiteral("sessionLabel"));
        sessionLabel->setGeometry(QRect(10, 0, 541, 31));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        sessionLabel->setFont(font);
        sessionLabel->setAlignment(Qt::AlignCenter);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(309, 40, 241, 240));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(314, 62, 231, 210));
        guestButton = new QPushButton(centralwidget);
        guestButton->setObjectName(QStringLiteral("guestButton"));
        guestButton->setGeometry(QRect(440, 380, 100, 60));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(guestButton->sizePolicy().hasHeightForWidth());
        guestButton->setSizePolicy(sizePolicy);
        guestButton->setIcon(icon1);
        signUpButton = new QPushButton(centralwidget);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setGeometry(QRect(440, 460, 100, 60));
        sizePolicy.setHeightForWidth(signUpButton->sizePolicy().hasHeightForWidth());
        signUpButton->setSizePolicy(sizePolicy);
        signUpButton->setIcon(icon2);
        logInButton = new QPushButton(centralwidget);
        logInButton->setObjectName(QStringLiteral("logInButton"));
        logInButton->setGeometry(QRect(440, 540, 100, 60));
        sizePolicy.setHeightForWidth(logInButton->sizePolicy().hasHeightForWidth());
        logInButton->setSizePolicy(sizePolicy);
        logInButton->setIcon(icon3);
        guestLabel = new QLabel(centralwidget);
        guestLabel->setObjectName(QStringLiteral("guestLabel"));
        guestLabel->setGeometry(QRect(20, 380, 411, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(12);
        guestLabel->setFont(font1);
        guestLabel->setAlignment(Qt::AlignCenter);
        guestLabel->setWordWrap(true);
        signUpLabel = new QLabel(centralwidget);
        signUpLabel->setObjectName(QStringLiteral("signUpLabel"));
        signUpLabel->setGeometry(QRect(20, 460, 411, 61));
        signUpLabel->setFont(font1);
        signUpLabel->setAlignment(Qt::AlignCenter);
        signUpLabel->setWordWrap(true);
        logInLabel = new QLabel(centralwidget);
        logInLabel->setObjectName(QStringLiteral("logInLabel"));
        logInLabel->setGeometry(QRect(20, 540, 411, 61));
        logInLabel->setFont(font1);
        logInLabel->setAlignment(Qt::AlignCenter);
        logInLabel->setWordWrap(true);
        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 557, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainMenu->setStatusBar(statusbar);
#ifndef QT_NO_SHORTCUT
        guestLabel->setBuddy(guestButton);
        signUpLabel->setBuddy(signUpButton);
        logInLabel->setBuddy(logInButton);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(guestButton, signUpButton);
        QWidget::setTabOrder(signUpButton, logInButton);
        QWidget::setTabOrder(logInButton, listWidget);
        QWidget::setTabOrder(listWidget, tabWidget);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionPlay_as_Guest);
        menuFile->addAction(actionSign_Up);
        menuFile->addAction(actionLog_In);
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionRules_of_the_Game);
        menuHelp->addAction(actionControls);
        menuAbout->addAction(actionReview_this_Game);
        menuAbout->addAction(actionAuthor);

        retranslateUi(MainMenu);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Jumble - Game of Words!", 0));
        actionPlay_as_Guest->setText(QApplication::translate("MainMenu", "Play as Guest", 0));
        actionPlay_as_Guest->setShortcut(QApplication::translate("MainMenu", "Ctrl+G", 0));
        actionSign_Up->setText(QApplication::translate("MainMenu", "Sign Up", 0));
        actionSign_Up->setShortcut(QApplication::translate("MainMenu", "Ctrl+U", 0));
        actionLog_In->setText(QApplication::translate("MainMenu", "Log In", 0));
        actionLog_In->setShortcut(QApplication::translate("MainMenu", "Ctrl+L", 0));
        actionRules_of_the_Game->setText(QApplication::translate("MainMenu", "Rules of the Game!", 0));
        actionControls->setText(QApplication::translate("MainMenu", "Controls", 0));
        actionReview_this_Game->setText(QApplication::translate("MainMenu", "Review this Game", 0));
        actionAuthor->setText(QApplication::translate("MainMenu", "Author", 0));
        actionExit->setText(QApplication::translate("MainMenu", "Exit", 0));
        actionExit->setShortcut(QApplication::translate("MainMenu", "Esc", 0));
        sessionLabel->setText(QApplication::translate("MainMenu", "<html><head/><body><p>Jumble</p></body></html>", 0));
        guestButton->setText(QApplication::translate("MainMenu", "Play as Guest", 0));
        signUpButton->setText(QApplication::translate("MainMenu", "Sign Up", 0));
        logInButton->setText(QApplication::translate("MainMenu", "Log In", 0));
        guestLabel->setText(QApplication::translate("MainMenu", "Hey! Wanna try this game out? Play as GUEST", 0));
        signUpLabel->setText(QApplication::translate("MainMenu", "Wanna create your own account? Sign Up here", 0));
        logInLabel->setText(QApplication::translate("MainMenu", "Already own an account? Log In here to play!", 0));
        menuFile->setTitle(QApplication::translate("MainMenu", "File", 0));
        menuHelp->setTitle(QApplication::translate("MainMenu", "Help", 0));
        menuAbout->setTitle(QApplication::translate("MainMenu", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
