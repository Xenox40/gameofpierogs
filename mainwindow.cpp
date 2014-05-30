#include <QDebug>

#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "dragon.h"
#include "knight.h"
#include "room.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString t = "Secret room hiding %1";
    Room a(t.arg("cucumbers")), b(t.arg("tomtatoes")),
        c(t.arg("potatoes"));

    a.bind(&b, Room::EAST);
    b.bind(&c, Room::SOUTH);

    Knight knight(&a);
    Dragon d[3];
    
    for(int i=0; i<4; ++i) {
        for(int j=0; j<3; ++j) {
            if(!knight.isDead())
                knight.attack(&d[j]);
            qDebug() << d[j].getHealth();
        }

        qDebug() << knight.getHealth();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
