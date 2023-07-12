#ifndef SIGNUPDIALOG_H
#define SIGNUPDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QThread>
#include "player.h"

namespace Ui {
class SignUpDialog;
}

class SignUpDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SignUpDialog(QWidget *parent = 0);
    ~SignUpDialog();

signals:
    void successfulSignUp(QString);
    
private slots:
    void on_okButton_clicked();
    void on_nameLineEdit_textChanged(const QString &arg1);

private:
    Ui::SignUpDialog *ui;
};

#endif // SIGNUPDIALOG_H
