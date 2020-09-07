/********************************************************************************
** Form generated from reading UI file 'Play.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAY_H
#define UI_PLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Play
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Play)
    {
        if (Play->objectName().isEmpty())
            Play->setObjectName(QString::fromUtf8("Play"));
        Play->resize(800, 600);
        pushButton = new QPushButton(Play);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(669, 20, 111, 31));

        retranslateUi(Play);
        QObject::connect(pushButton, SIGNAL(pressed()), Play, SLOT(highScore()));

        QMetaObject::connectSlotsByName(Play);
    } // setupUi

    void retranslateUi(QWidget *Play)
    {
        Play->setWindowTitle(QCoreApplication::translate("Play", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Play", "Back to menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Play: public Ui_Play {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAY_H
