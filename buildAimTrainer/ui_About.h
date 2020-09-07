/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(800, 600);
        pushButton = new QPushButton(About);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 540, 80, 22));
        label = new QLabel(About);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 150, 381, 21));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(About);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 210, 571, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(About);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 240, 611, 20));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(About);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 280, 381, 21));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(About);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(110, 310, 601, 20));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(About);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 360, 361, 20));
        label_6->setAlignment(Qt::AlignCenter);

        retranslateUi(About);
        QObject::connect(pushButton, SIGNAL(pressed()), About, SLOT(backToMenu()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("About", "Back", nullptr));
        label->setText(QCoreApplication::translate("About", "Welcome to my simplistic aim trainer game!", nullptr));
        label_2->setText(QCoreApplication::translate("About", "There is 3 difficulties you can play on: easy, medium, difficult. ", nullptr));
        label_3->setText(QCoreApplication::translate("About", "To select one, go to Difficulty menu. (It is set to easy by default)", nullptr));
        label_4->setText(QCoreApplication::translate("About", "To play, click on the Play button in the main menu.", nullptr));
        label_5->setText(QCoreApplication::translate("About", "The objective is to click on the appearing dots before they disappear.", nullptr));
        label_6->setText(QCoreApplication::translate("About", "The game ends if the score goes into negative.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
