#ifndef SESSION_H
#define SESSION_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QList>
#include <QMessageBox>
#include <iostream>
#include <QThread>
#include "letter.h"
#include "player.h"
#include "timer.h"
#include "wordchecker.h"

const unsigned allocatedTime = 100;

namespace Ui {
class Session;
}


class Session : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Session(QString user = QString("GUEST"), QWidget *parent = 0);
    ~Session();
    void setGameActive(bool);
    void getNewLetterButtons();
    void linkLetterButtonsAndValues();
    bool wordHasBeenEntered(const QString&);
    bool wordIsValid(const QString&);

private slots:
    void on_newGameButton_clicked();
    void on_submitButton_clicked();
    void on_clearOneButton_clicked();
    void on_clearAllButton_clicked();
    void on_lineEdit_returnPressed();
    void on_lineEdit_textChanged(const QString &arg1);
    void on_letterButton_8_clicked();
    void on_letterButton_1_clicked();
    void on_letterButton_2_clicked();
    void on_letterButton_3_clicked();
    void on_letterButton_4_clicked();
    void on_letterButton_5_clicked();
    void on_letterButton_6_clicked();
    void on_letterButton_7_clicked();
    void on_letterButton_9_clicked();
    void on_letterButton_10_clicked();
    void on_actionNew_Game_triggered();
    void onCountDown(unsigned);
    void onPointsReceived(QString, unsigned);
    void on_actionRules_of_the_Game_triggered();
    void on_actionControls_triggered();
    void on_backLink_clicked();
    void on_actionBack_triggered();

    void on_actionAuthor_triggered();

signals:
    void sessionClosed(Player);

private:
    Ui::Session *ui;
    WordChecker *checker;
    Timer *timer;
    Letter *letter;
    QLabel *letterScore[10];
    QPushButton *letterButton[10];
    unsigned sessionScore;
    char currentLetters[10];
    QStringList previouslyEnteredWords;
    Player *currentUser;
};

#endif // SESSION_H
