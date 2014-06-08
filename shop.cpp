#include "shop.h"
#include "ui_shop.h"

Shop::Shop(QWidget *parent) :
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
    w = new World();
    w->getHero()->setShield(false);
    qDebug() << w->getHero()->getShield();
}
