#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include <QListWidget>
#include <QTreeWidget>
#include "logindialog.h"
#include "session.h"
#include "signupdialog.h"
#include <iostream>

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();
    void logInWithName(QString name = QString("GUEST"));
    
public slots:
    void on_logInButton_clicked();
    void on_signUpButton_clicked();
    void on_guestButton_clicked();
    void onUserLoggedIn(QString);
    void onSessionClosed(Player);
    void setUpTabWidget();

private slots:
    void on_actionPlay_as_Guest_triggered();
    void on_actionSign_Up_triggered();
    void on_actionLog_In_triggered();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void on_actionExit_triggered();
    void on_actionRules_of_the_Game_triggered();
    void on_actionControls_triggered();
    void on_actionAuthor_triggered();

private:
    Ui::MainMenu *ui;
    Session *session;
    LogInDialog *logIn;
    SignUpDialog *signUp;
    QTreeWidget *treeWidget;
};

#endif // MAINMENU_H
