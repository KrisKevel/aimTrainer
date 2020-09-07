#include "About.h"
#include "Menu.h"
#include "mainwindow.h"
#include "ui_About.h"

#include <QPainter>
#include <QPaintEvent>
#include <QWidget>
#include <QPushButton>
#include <QString>

#include <iostream>
#include "QTextStream"

//QTextStream(stdout) << "string to print" << endl;


About::About(MainWindow *parent)
    : QWidget(parent), m_mainWindow(parent), ui(new Ui::About)
{
    setWindowTitle(QString("Aim trainer"));
    ui->setupUi(this);

}

About::~About() {
    delete ui;
}

void About::backToMenu(){
    emit(menu());
}
