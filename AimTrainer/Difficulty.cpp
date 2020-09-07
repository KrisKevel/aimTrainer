#include "Difficulty.h"
#include "Menu.h"
#include "mainwindow.h"
#include "ui_Difficulty.h"

#include <QPainter>
#include <QPaintEvent>
#include <QWidget>


Difficulty::Difficulty(MainWindow *parent)
    : QWidget(parent), m_mainWindow(parent), ui(new Ui::Difficulty)
{
    ui->setupUi(this);
}

Difficulty::~Difficulty() {
}

void Difficulty::backToMenu(){
    emit(menu());
}

void Difficulty::selectEasy(){
    emit(easy());
}
void Difficulty::selectMedium(){
    emit(medium());
}
void Difficulty::selectHard(){
    emit(hard());
}
