/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

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

class Ui_LogInDialog
{
public:
    QLabel *enterNameLabel;
    QLineEdit *nameLineEdit;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QLabel *titleLabel;

    void setupUi(QDialog *LogInDialog)
    {
        if (LogInDialog->objectName().isEmpty())
            LogInDialog->setObjectName(QStringLiteral("LogInDialog"));
        LogInDialog->resize(400, 204);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LogInDialog->sizePolicy().hasHeightForWidth());
        LogInDialog->setSizePolicy(sizePolicy);
        LogInDialog->setMinimumSize(QSize(400, 204));
        QIcon icon;
        icon.addFile(QStringLiteral("C:/Program Files (x86)/CodeBlocks/share/CodeBlocks/templates/wizard/plugins/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        LogInDialog->setWindowIcon(icon);
        LogInDialog->setModal(true);
        enterNameLabel = new QLabel(LogInDialog);
        enterNameLabel->setObjectName(QStringLiteral("enterNameLabel"));
        enterNameLabel->setGeometry(QRect(10, 40, 381, 30));
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(12);
        enterNameLabel->setFont(font);
        enterNameLabel->setAlignment(Qt::AlignCenter);
        nameLineEdit = new QLineEdit(LogInDialog);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(10, 80, 381, 41));
        cancelButton = new QPushButton(LogInDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(220, 150, 75, 40));
        QIcon icon1;
        icon1.addFile(QStringLiteral("C:/Qt/Qt5.0.2/5.0.2/mingw47_32/examples/declarative/toys/tic-tac-toe/qml/tic-tac-toe/content/pics/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);
        okButton = new QPushButton(LogInDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setGeometry(QRect(120, 150, 75, 40));
        QIcon icon2;
        icon2.addFile(QStringLiteral("C:/Qt/Qt5.0.2/5.0.2/mingw47_32/examples/widgets/tools/undo/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon2);
        titleLabel = new QLabel(LogInDialog);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        titleLabel->setGeometry(QRect(10, 10, 381, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("Consolas"));
        font1.setPointSize(20);
        titleLabel->setFont(font1);
        titleLabel->setAlignment(Qt::AlignCenter);
#ifndef QT_NO_SHORTCUT
        enterNameLabel->setBuddy(nameLineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(nameLineEdit, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(LogInDialog);
        QObject::connect(cancelButton, SIGNAL(clicked()), LogInDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(LogInDialog);
    } // setupUi

    void retranslateUi(QDialog *LogInDialog)
    {
        LogInDialog->setWindowTitle(QApplication::translate("LogInDialog", "Dialog", 0));
        enterNameLabel->setText(QApplication::translate("LogInDialog", "Enter your name below:", 0));
        cancelButton->setText(QApplication::translate("LogInDialog", "Cancel", 0));
        okButton->setText(QApplication::translate("LogInDialog", "Ok", 0));
        titleLabel->setText(QApplication::translate("LogInDialog", "<b style='color:blue;font-weight:bolder;'>Log In</b>", 0));
    } // retranslateUi

};

namespace Ui {
    class LogInDialog: public Ui_LogInDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
