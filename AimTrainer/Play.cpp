#include "Play.h"
#include "Menu.h"
#include "mainwindow.h"
#include "ui_Play.h"

#include <QPainter>
#include <QPaintEvent>
#include <QWidget>
#include <QTimer>
#include <cmath>
#include <QMessageBox>



Play::Play(MainWindow *parent)
    : QWidget(parent), m_mainWindow(parent), ui(new Ui::Play)
{
    this->resize(800,600);
    ui->setupUi(this);
    connect(m_mainWindow, SIGNAL(start()), this, SLOT(startTheGame()));
    m_scoreInfo = new QLabel(this);
    m_scoreInfo -> setAlignment(Qt::AlignTop | Qt::AlignLeft);
    m_scoreInfo -> setGeometry(QRect(3,25,200,40));
}


Play::~Play() {
}

//Meetod, mis joonistab ringe
void Play::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.fillRect(event->rect(), Qt::white);

    painter.setBrush(Qt::red);

    for(QPoint p: *m_dots){
        painter.drawEllipse(p.x()-10, p.y()-10,20,20);
    }

}

//Meetod, mida kutsutakse mängu alguses
void Play::startTheGame(){
    m_score = 0;
    m_high = 0;

    selectDifficulty();

    m_dots = new QVector<QPoint>();

    timer_add = new QTimer(this);
    timer_add->setTimerType(Qt::PreciseTimer);
    connect(timer_add, SIGNAL(timeout()), this, SLOT(addDot()));
    timer_add->start(m_appear);

    timer_remove = new QTimer(this);
    timer_remove->setTimerType(Qt::PreciseTimer);
    connect(timer_remove, SIGNAL(timeout()), this, SLOT(removeDot()));
    timer_remove->start(m_disappear);

    connect(this, SIGNAL(change()), this, SLOT(updateLabel()));
    emit(change());

}

//Meetod, mis lisab juhusliku ringi vektorisse
void Play::addDot(){
    float r1 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    float r2 = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

    m_dots->push_back(*new QPoint(r1*780+10, r2*510+50));

    update();
}

//Meetod, mis eemaldab punkti väljakust ja vektorist, kui see oli väljakul liika kaua
void Play::removeDot(){
    if((m_dots->size() && m_firstAdded->x() == 0 && m_firstAdded->y() == 0) ||
            (m_dots->size() > 0 && m_dots->at(0).x() == m_firstAdded->x() && m_dots->at(0).y() == m_firstAdded->y())){
        m_dots->remove(0);
        m_score-=m_deduct;
        emit(change());
    }


    if(m_dots->size() != 0)
        *m_firstAdded = m_dots->at(0);
    else{
        m_firstAdded = new QPoint(0,0);
    }

    if(m_score < 0){
        highScore();
        return;
    }

    update();
}


//Meetod, mis eemaldab ringi, kui kasutaja klikkis selle peale
void Play::removePointUnderMouse(QPoint pos){
    int point = -1;
    for(int i = 0; i<m_dots->size();i++){
        if(sqrt(pow((m_dots->at(i).x() - pos.x()),2) + pow((m_dots->at(i).y()-pos.y()),2)) < 10){
            point = i;
            break;
        }
    }

    if(point>-1){
        *m_firstAdded = m_dots->at(0);
        m_dots->erase(m_dots->begin()+point);
        m_score+=m_add;
        if(m_score > m_high){
            m_high = m_score;
        }
    }
}

//Meetod, mis reageerib kasutaja klikkide peale
void Play::mousePressEvent(QMouseEvent *event){
    if(event -> button() == Qt::LeftButton){
        removePointUnderMouse(event->pos());
        emit(change());
        update();
    }
}

//Meetod, mis käivitub, kui mäng on lõppenud
void Play::highScore(){
    m_dots->clear();
    timer_add->stop();
    timer_remove->stop();
    QMessageBox msgBox;
    msgBox.setText("The game has ended.");
    msgBox.setInformativeText("Your high score is " + QString::number(m_high));
    QPushButton *restartButton = msgBox.addButton(tr("Restart"), QMessageBox::ActionRole);
    QPushButton *backButton = msgBox.addButton(tr("Back to menu"), QMessageBox::ActionRole);
    msgBox.exec();

    if (msgBox.clickedButton() == restartButton) {
        startTheGame();
    } else if (msgBox.clickedButton() == backButton) {
        emit(menu());
    }
}

//Meetod, mille abil uuendatakse jooksvat skoori.
void Play::updateLabel(){
    m_scoreInfo->setText("Current score:  " + QString::number(m_score));
}


//Meetod, mille abil valitakse keerukuse (sõltuvalt valikust difficulty menüüs)
void Play::selectDifficulty(){
    if(m_mainWindow->m_difficulty == 0){
        selectEasy();
    }
    else if(m_mainWindow->m_difficulty == 1){
        selectMedium();
    }
    else{
        selectHard();
    }
}

//Meetodid, mis sõltuvalt keerukusest määravad punktide arvu ja ringide ilmumise ja kaomise kiiruse
void Play::selectEasy(){
    m_add = 30;
    m_deduct = 10;
    m_appear = 1000;
    m_disappear = 2600;
}
void Play::selectMedium(){
    m_add = 20;
    m_deduct = 10;
    m_appear = 1500;
    m_disappear = 2400;
}

void Play::selectHard(){
    m_add = 10;
    m_deduct = 10;
    m_appear = 2500;
    m_disappear = 2300;
}
