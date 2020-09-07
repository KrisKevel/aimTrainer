#ifndef DIFFICULTY_H
#define DIFFICULTY_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Difficulty; }
QT_END_NAMESPACE

class MainWindow;

class Difficulty: public QWidget{
    Q_OBJECT
    public:
        Difficulty(MainWindow *parent = 0);
        ~Difficulty();

    signals:
        void menu();
        void easy();
        void medium();
        void hard();

    protected slots:
        void backToMenu();
        void selectEasy();
        void selectMedium();
        void selectHard();

    protected:
        MainWindow *m_mainWindow;

    private:
        Ui::Difficulty *ui;
};

#endif // DIFFICULTY_H
