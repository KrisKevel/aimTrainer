#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Menu.h>
#include <About.h>
#include <Play.h>
#include <Difficulty.h>
#include <QStackedWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    protected slots:
        void initPlay();
        void initDiff();
        void initAbout();
        void initMenu();
        void selectEasy();
        void selectMedium();
        void selectHard();

    signals:
        void about();
        void diff();
        void play();
        void menu();
        void start();
        void easy();
        void medium();
        void hard();

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();
        int m_difficulty = 0;

    private:
        Ui::MainWindow *ui;
        QStackedWidget *m_stack;
        MainMenu *m_mainMenu;
        About *m_about;
        Play *m_play;
        Difficulty *m_diff;

};
#endif // MAINWINDOW_H
