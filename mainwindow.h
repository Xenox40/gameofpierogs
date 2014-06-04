#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QList>
#include <QMainWindow>
#include <QPushButton>

#include "world.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    World world;
    void synchronize();
    void moveHero(Room::Direction dir);

    QList<QPushButton*> buttonByDir;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
