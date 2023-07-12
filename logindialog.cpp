#include "logindialog.h"
#include "ui_logindialog.h"

LogInDialog::LogInDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogInDialog)
{
    ui->setupUi(this);
}

LogInDialog::~LogInDialog()
{
    delete ui;
}

void LogInDialog::on_okButton_clicked()
{
    QString name = ui->nameLineEdit->text();
    Player p(name);
    QString text("Enter your name below:");
    if(name.isEmpty())
    {
        ui->enterNameLabel->setText("<b style='color:red;'>*</b>" + text +
                                    "<b style='color:red;'>Cannot be empty!</b>");
    }
    else if(p.exists(name))
    {
        // confirm successful log in
        connect(this, SIGNAL(userLoggedIn(QString)), parentWidget(), SLOT(onUserLoggedIn(QString)));
        QString title("Log In Successful");
        QString text("You have successfully logged in<br>");
        QMessageBox::information(this, title, text);
        emit userLoggedIn(name);
    }
    else
    {
        QString title("Invalid User Name!");
        QString text("The user name you entered is invalid.\n"
                     "Check your spelling and try again.");
        QMessageBox::warning(this, title, text);
    }
}

void LogInDialog::on_nameLineEdit_textChanged(const QString &arg1)
{
    ui->nameLineEdit->setText(arg1.toLower());
}
