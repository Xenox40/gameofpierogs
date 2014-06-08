#ifndef SHOP_H
#define SHOP_H

#include <QWidget>
#include <QDebug>
#include "world.h"

namespace Ui {
class Shop;
}

class Shop : public QWidget
{
    Q_OBJECT
protected:
    World* w;

public:
    explicit Shop(QWidget *parent = 0);
    ~Shop();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Shop *ui;
};

#endif // SHOP_H
