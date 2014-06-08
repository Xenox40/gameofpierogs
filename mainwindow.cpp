#include <functional>

#include <QDebug>
#include <QEventLoop>

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

    enemies = new QStandardItemModel;
    QStringList enemiesLabels = { "Name", "Health", "Attack" };
    enemies->setHorizontalHeaderLabels(enemiesLabels);
    ui->enemies->setModel(enemies);

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

    auto content = world.currentRoom()->getContent();
    enemies->setRowCount(content.size());
    for(int i=0; i<content.size(); ++i) {
        QStringList data = {
            content[i]->introduceYourself(), 
            QString::number(content[i]->getHealth())
        };

        for(int k=0; k<2; ++k) {
            auto item = new QStandardItem(data[k]);
            item->setEditable(false);
            enemies->setItem(i, k, item);
        }

        auto button = new QPushButton("Charge!");
        auto index = enemies->index(i, 2);
        connect(button, &QPushButton::clicked,
            [=](){ world.getHero()->attack(content[i]); synchronize(); });
        ui->enemies->setIndexWidget(index, button);
    }

    ui->enemies->resizeColumnsToContents();
    ui->enemies->horizontalHeader()->reset();
}

void MainWindow::moveHero(Room::Direction dir)
{
    world.getHero()->move(dir);
    synchronize();
}

void MainWindow::on_pushButton_clicked()
{
    s.show();
    s.raise();
    s.activateWindow();
    synchronize();

}
