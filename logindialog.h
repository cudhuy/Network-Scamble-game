#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QThread>
#include "player.h"
#include <iostream>


namespace Ui {
class LogInDialog;
}

class LogInDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LogInDialog(QWidget *parent = 0);
    ~LogInDialog();

signals:
    void userLoggedIn(QString);
    
private slots:
    void on_okButton_clicked();
    void on_nameLineEdit_textChanged(const QString &arg1);

private:
    Ui::LogInDialog *ui;
};

#endif // LOGINDIALOG_H
