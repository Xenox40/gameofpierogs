#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QList>
#include <QMainWindow>
#include <QPushButton>
#include <QStandardItemModel>

#include "world.h"
#include "shop.h"

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
    Shop s;
    void synchronize();
    void moveHero(Room::Direction dir);

    QList<QPushButton*> buttonByDir;
    QStandardItemModel* enemies;

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
