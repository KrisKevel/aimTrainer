#include "Menu.h"
#include "mainwindow.h"
#include "ui_MainMenu.h"
#include "About.h"

#include <QPainter>
#include <QPaintEvent>
#include <QWidget>
#include <QMessageBox>


/**
  Constructs a drawing widget.
  \param[in] parent parent widget of the drawing widget.
*/
MainMenu::MainMenu(MainWindow *parent)
    : QWidget(parent), m_mainWindow(parent), ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    this->resize(800,600);
}

MainMenu::~MainMenu() {
    delete ui;
}

void MainMenu::initPlay(){
    emit(play());
}

void MainMenu::initDiff(){
    emit(diff());
}

void MainMenu::initAbout(){
    emit(about());
}

void MainMenu::initQuit(){
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Quit", "Are you sure you want to quit?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
        QApplication::quit();
      }
}
