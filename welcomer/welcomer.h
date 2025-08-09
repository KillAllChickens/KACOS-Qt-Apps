/********************************************************************************
** Form generated from reading UI file 'Welcomer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.17
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef WELCOMER_H
#define WELCOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcomer
{
public:
    QLabel *Logo;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Title;
    QLabel *Title2;
    QLabel *Description;

    void setupUi(QDialog *Welcomer)
    {
        if (Welcomer->objectName().isEmpty())
            Welcomer->setObjectName(QString::fromUtf8("Welcomer"));
        Welcomer->resize(631, 361);
        Logo = new QLabel(Welcomer);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(20, 10, 141, 181));
        Logo->setPixmap(QPixmap(QString::fromUtf8(":/Logo/logo.png")));
        Logo->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayoutWidget = new QWidget(Welcomer);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(200, 30, 381, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Title = new QLabel(verticalLayoutWidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        QFont font;
        font.setFamily(QString::fromUtf8("Noto Sans Lao Looped Black"));
        font.setPointSize(32);
        font.setBold(true);
        Title->setFont(font);
        Title->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        verticalLayout->addWidget(Title);

        Title2 = new QLabel(verticalLayoutWidget);
        Title2->setObjectName(QString::fromUtf8("Title2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Noto Sans Lao Looped Medium"));
        font1.setPointSize(20);
        Title2->setFont(font1);
        Title2->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        Title2->setMargin(-10);

        verticalLayout->addWidget(Title2);

        Description = new QLabel(Welcomer);
        Description->setObjectName(QString::fromUtf8("Description"));
        Description->setGeometry(QRect(0, 200, 621, 151));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Noto Sans Lao Looped Medium"));
        font2.setPointSize(12);
        font2.setBold(false);
        Description->setFont(font2);
        Description->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        Description->setWordWrap(true);
        Description->setOpenExternalLinks(true);

        retranslateUi(Welcomer);

        QMetaObject::connectSlotsByName(Welcomer);
    } // setupUi

    void retranslateUi(QDialog *Welcomer)
    {
        Welcomer->setWindowTitle(QCoreApplication::translate("Welcomer", "Welcome to KACOS", nullptr));
        Logo->setText(QString());
        Title->setText(QCoreApplication::translate("Welcomer", "Welcome!", nullptr));
        Title2->setText(QCoreApplication::translate("Welcomer", "to KACOS!", nullptr));
        Description->setText(QCoreApplication::translate("Welcomer", "<html><head/><body><p><span style=\" font-size:12pt;\">This is just a hobby project made by one dev.</span></p><p><span style=\" font-size:12pt;\">Feel free to look around!</span></p><p><span style=\" font-size:12pt;\">Email me if you have any questions or need help, </span><a href=\"mailto:vance@killallchickens.org\"><span style=\" font-size:12pt; text-decoration: underline; color:#646464;\">vance@killallchickens.org</span></a></p><p><a href=\"https://killallchickens.org\"><span style=\" text-decoration: underline; color:#646464;\">KillAllChickens.org</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcomer: public Ui_Welcomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // WELCOMER_H
