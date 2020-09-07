#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "About.h"
#include "Difficulty.h"
#include "Play.h"

#include <QStackedWidget>

#include <iostream>
#include "QTextStream"

//QTextStream(stdout) << "string to print" << endl;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    setWindowTitle(QString("Aim trainer"));
    ui->setupUi(this);
    this->setFixedSize(800,600);

    m_stack = new QStackedWidget(this);

    m_mainMenu = new MainMenu(this);
    m_play = new Play(this);
    m_diff = new Difficulty(this);
    m_about = new About(this);

    m_stack->addWidget(m_mainMenu);
    m_stack->addWidget(m_play);
    m_stack->addWidget(m_diff);
    m_stack->addWidget(m_about);

    setCentralWidget(m_stack);

    initMenu();

    //Ühendused, mille abil vahetatakse vaateid
    connect(m_mainMenu, SIGNAL(about()),
            this, SLOT(initAbout()));
    connect(m_mainMenu, SIGNAL(play()),
            this, SLOT(initPlay()));
    connect(m_mainMenu, SIGNAL(diff()),
            this, SLOT(initDiff()));

    connect(m_play, SIGNAL(menu()),
            this, SLOT(initMenu()));
    connect(m_diff, SIGNAL(menu()),
            this, SLOT(initMenu()));
    connect(m_about, SIGNAL(menu()),
            this, SLOT(initMenu()));


    //Keerukuse ühendused
    connect(m_diff, SIGNAL(easy()),
            this, SLOT(selectEasy()));
    connect(m_diff, SIGNAL(medium()),
            this, SLOT(selectMedium()));
    connect(m_diff, SIGNAL(hard()),
            this, SLOT(selectHard()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMenu(){
    m_stack->setCurrentIndex(0);
}

void MainWindow::initPlay(){
    m_stack->setCurrentIndex(1);
    emit(start());
}

void MainWindow::initDiff(){
    m_stack->setCurrentIndex(2);
}

void MainWindow::initAbout(){
    m_stack->setCurrentIndex(3);
}

void MainWindow::selectEasy(){
    m_difficulty = 0;
}
void MainWindow::selectMedium(){
    m_difficulty = 1;
}
void MainWindow::selectHard(){
    m_difficulty = 2;
}
