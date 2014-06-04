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
}

MainWindow::~MainWindow()
{
    delete ui;
}
