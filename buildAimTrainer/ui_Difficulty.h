/********************************************************************************
** Form generated from reading UI file 'Difficulty.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTY_H
#define UI_DIFFICULTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Difficulty
{
public:
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;

    void setupUi(QWidget *Difficulty)
    {
        if (Difficulty->objectName().isEmpty())
            Difficulty->setObjectName(QString::fromUtf8("Difficulty"));
        Difficulty->resize(800, 550);
        pushButton = new QPushButton(Difficulty);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 510, 80, 22));
        radioButton = new QRadioButton(Difficulty);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(310, 150, 85, 20));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(Difficulty);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(310, 200, 111, 31));
        radioButton_3 = new QRadioButton(Difficulty);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(310, 250, 121, 41));

        retranslateUi(Difficulty);
        QObject::connect(pushButton, SIGNAL(pressed()), Difficulty, SLOT(backToMenu()));
        QObject::connect(radioButton, SIGNAL(toggled(bool)), Difficulty, SLOT(selectEasy()));
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), Difficulty, SLOT(selectMedium()));
        QObject::connect(radioButton_3, SIGNAL(toggled(bool)), Difficulty, SLOT(selectHard()));

        QMetaObject::connectSlotsByName(Difficulty);
    } // setupUi

    void retranslateUi(QWidget *Difficulty)
    {
        Difficulty->setWindowTitle(QCoreApplication::translate("Difficulty", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Difficulty", "Back", nullptr));
        radioButton->setText(QCoreApplication::translate("Difficulty", "Easy", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Difficulty", "Medium", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Difficulty", "Difficult", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Difficulty: public Ui_Difficulty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTY_H
