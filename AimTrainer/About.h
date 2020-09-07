#ifndef ABOUT_H
#define ABOUT_H


#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class About; }
QT_END_NAMESPACE

class MainWindow;

class About: public QWidget{
    Q_OBJECT
    public:
        About(MainWindow *parent = 0);
        ~About();

    signals:
        void menu();

    protected slots:
        void backToMenu();

    protected:
        MainWindow *m_mainWindow;

    private:
        Ui::About *ui;
};

#endif // ABOUT_H
