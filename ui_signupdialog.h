/********************************************************************************
** Form generated from reading UI file 'signupdialog.ui'
**
** Created by: Qt User Interface Compiler
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPDIALOG_H
#define UI_SIGNUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUpDialog
{
public:
    QLabel *titleLabel;
    QLabel *enterNameLabel;
    QLineEdit *nameLineEdit;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QLineEdit *emailLineEdit;
    QLabel *enterEmailLabel;

    void setupUi(QDialog *SignUpDialog)
    {
        if (SignUpDialog->objectName().isEmpty())
            SignUpDialog->setObjectName(QStringLiteral("SignUpDialog"));
        SignUpDialog->resize(400, 268);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignUpDialog->sizePolicy().hasHeightForWidth());
        SignUpDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("C:/Program Files (x86)/CodeBlocks/share/CodeBlocks/templates/wizard/plugins/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        SignUpDialog->setWindowIcon(icon);
        SignUpDialog->setModal(true);
        titleLabel = new QLabel(SignUpDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(10, 10, 381, 30));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(20);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);
        enterNameLabel = new QLabel(SignUpDialog);
        enterNameLabel->setObjectName(QStringLiteral("enterNameLabel"));
        enterNameLabel->setGeometry(QRect(10, 40, 381, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(12);
        enterNameLabel->setFont(font1);
        enterNameLabel->setAlignment(Qt::AlignCenter);
        nameLineEdit = new QLineEdit(SignUpDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(10, 80, 381, 41));
        cancelButton = new QPushButton(SignUpDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(220, 220, 75, 40));
        QIcon icon1;
        icon1.addFile(QStringLiteral("C:/Qt/Qt5.0.2/5.0.2/mingw47_32/examples/declarative/toys/tic-tac-toe/qml/tic-tac-toe/content/pics/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);
        okButton = new QPushButton(SignUpDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(120, 220, 75, 40));
        QIcon icon2;
        icon2.addFile(QStringLiteral("C:/Qt/Qt5.0.2/5.0.2/mingw47_32/examples/widgets/tools/undo/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon2);
        emailLineEdit = new QLineEdit(SignUpDialog);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(10, 170, 381, 41));
        enterEmailLabel = new QLabel(SignUpDialog);
        enterEmailLabel->setObjectName(QStringLiteral("enterEmailLabel"));
        enterEmailLabel->setGeometry(QRect(12, 130, 380, 30));
        enterEmailLabel->setFont(font1);
        enterEmailLabel->setAlignment(Qt::AlignCenter);
#ifndef QT_NO_SHORTCUT
        enterNameLabel->setBuddy(nameLineEdit);
        enterEmailLabel->setBuddy(emailLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(nameLineEdit, emailLineEdit);
        QWidget::setTabOrder(emailLineEdit, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(SignUpDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), SignUpDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(SignUpDialog);
    } // setupUi

    void retranslateUi(QDialog *SignUpDialog)
    {
        SignUpDialog->setWindowTitle(QApplication::translate("SignUpDialog", "Dialog", 0));
        titleLabel->setText(QApplication::translate("SignUpDialog", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">Sign Up</span></p></body></html>", 0));
        enterNameLabel->setText(QApplication::translate("SignUpDialog", "Enter your name below:", 0));
        cancelButton->setText(QApplication::translate("SignUpDialog", "Cancel", 0));
        okButton->setText(QApplication::translate("SignUpDialog", "Ok", 0));
        enterEmailLabel->setText(QApplication::translate("SignUpDialog", "Enter your email below:", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUpDialog: public Ui_SignUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPDIALOG_H
