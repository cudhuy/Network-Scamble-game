#include "signupdialog.h"
#include "ui_signupdialog.h"

SignUpDialog::SignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpDialog)
{
    ui->setupUi(this);
}

SignUpDialog::~SignUpDialog()
{
    delete ui;
}

void SignUpDialog::on_okButton_clicked()
{
    QString name(ui->nameLineEdit->text());
    QString email(ui->emailLineEdit->text());
    Player p(name);
    QString text("Enter your name below:");
    if(name.isEmpty())
    {
        ui->enterNameLabel->setText("<b style='color:red;'>*</b>" + text +
                                    "<b style='color:red;'>Cannot be empty!</b>");
        return;
    }
    if(p.exists(name))
    {
        ui->enterNameLabel->setText(text + "<b style='color:red;'>User already exists!</b>");
        return;
    }
    if(!p.exists(name))
    {
        // save the player data
        p.saveToFile();
        // confirm successful sign up
        QString title("Sign Up Successful");
        QString text("<b style='color:blue;'>Name :</b>" + name + "<br>"
                     "<b style='color:blue;'>Email:</b>" + email + "<br>");
        QMessageBox::information(this, title, text);
        emit ui->cancelButton->clicked();
    }
}

void SignUpDialog::on_nameLineEdit_textChanged(const QString &arg1)
{
    ui->nameLineEdit->setText(arg1.toLower());
}
