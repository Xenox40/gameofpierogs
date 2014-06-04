#include <functional>

#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dragon.h"
#include "knight.h"
#include "room.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buttonByDir = { ui->north, ui->west, ui->south, ui->east };
    synchronize();

    for(int i=0; i<4; ++i) {
        connect(buttonByDir[i], &QPushButton::clicked,
            [=](){ moveHero(Room::Direction(i)); });
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::synchronize()
{
    for(int i=0; i<4; ++i) {
        Room::Direction dir = (Room::Direction)i;
        buttonByDir[dir]->setDisabled(!world.getHero()->canMove(dir));
    }

    ui->roomName->setText(world.currentRoom()->getDescription());
    ui->health->setText(QString::number(world.getHero()->getHealth()));
    ui->name->setText(world.getHero()->introduceYourself());
}

void MainWindow::moveHero(Room::Direction dir)
{
    world.getHero()->move(dir);
    synchronize();
}
