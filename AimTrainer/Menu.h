#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <About.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainMenu; }
QT_END_NAMESPACE

class MainWindow;

class MainMenu: public QWidget{
    Q_OBJECT
    public:
        MainMenu(MainWindow *parent = 0);
        ~MainMenu();

    signals:
        void about();
        void diff();
        void play();

    protected slots:
        void initPlay();
        void initDiff();
        void initAbout();
        void initQuit();

    protected:
        MainWindow *m_mainWindow;
        About *m_aboutScreen;

    private:
        Ui::MainMenu *ui;
};

#endif // MENU_H
