#ifndef PLAY_H
#define PLAY_H

#include <QWidget>
#include <QVector>
#include <QPoint>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class Play; }
QT_END_NAMESPACE

class MainWindow;

class Play: public QWidget{
    Q_OBJECT
    public:
        Play(MainWindow *parent = 0);
        ~Play();

    signals:
        void menu();
        void start();
        void change();
        void easy();
        void medium();
        void hard();

    protected slots:
        void addDot();
        void removeDot();
        void startTheGame();
        void updateLabel();
        void highScore();

    protected:
        MainWindow *m_mainWindow;
        void paintEvent(QPaintEvent *event);
        void removePointUnderMouse(QPoint pos);
        void mousePressEvent(QMouseEvent *event);

        void selectEasy();
        void selectMedium();
        void selectHard();
        void selectDifficulty();

        QVector<QPoint> *m_dots;
        QTimer *timer_add;
        QTimer *timer_remove;
        QPoint *m_firstAdded = new QPoint(0,0);
        int m_score;
        int m_high;
        int m_add;
        int m_deduct;
        int m_appear;
        int m_disappear;
        QLabel *m_scoreInfo;

    private:
        Ui::Play *ui;
};

#endif // PLAY_H
