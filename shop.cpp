#include "shop.h"
#include "ui_shop.h"
#include "mainwindow.h"

Shop::Shop(World* _w, QWidget *parent) :
    w(_w),
    QWidget(parent),
    ui(new Ui::Shop)
{
    ui->setupUi(this);
}

Shop::~Shop()
{
    delete ui;
}

void Shop::on_pushButton_clicked()
{
    w->getHero()->setShield(true);
    MainWindow main;
    main.synchronize();
}
