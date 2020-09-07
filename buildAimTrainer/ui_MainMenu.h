/********************************************************************************
** Form generated from reading UI file 'MainMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *play;
    QPushButton *difficulty;
    QPushButton *about;
    QPushButton *quit;

    void setupUi(QWidget *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(800, 600);
        verticalLayoutWidget = new QWidget(MainMenu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(300, 130, 191, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        play = new QPushButton(verticalLayoutWidget);
        play->setObjectName(QString::fromUtf8("play"));

        verticalLayout->addWidget(play);

        difficulty = new QPushButton(verticalLayoutWidget);
        difficulty->setObjectName(QString::fromUtf8("difficulty"));

        verticalLayout->addWidget(difficulty);

        about = new QPushButton(verticalLayoutWidget);
        about->setObjectName(QString::fromUtf8("about"));

        verticalLayout->addWidget(about);

        quit = new QPushButton(verticalLayoutWidget);
        quit->setObjectName(QString::fromUtf8("quit"));

        verticalLayout->addWidget(quit);


        retranslateUi(MainMenu);
        QObject::connect(play, SIGNAL(pressed()), MainMenu, SLOT(initPlay()));
        QObject::connect(quit, SIGNAL(pressed()), MainMenu, SLOT(initQuit()));
        QObject::connect(about, SIGNAL(pressed()), MainMenu, SLOT(initAbout()));
        QObject::connect(difficulty, SIGNAL(pressed()), MainMenu, SLOT(initDiff()));

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QWidget *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "Form", nullptr));
        play->setText(QCoreApplication::translate("MainMenu", "Play", nullptr));
        difficulty->setText(QCoreApplication::translate("MainMenu", "Difficulty", nullptr));
        about->setText(QCoreApplication::translate("MainMenu", "About", nullptr));
        quit->setText(QCoreApplication::translate("MainMenu", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
