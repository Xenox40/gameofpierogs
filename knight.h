#ifndef KNIGHT_H
#define KNIGHT_H

#include "hero.h"

class Knight : public Hero
{
public:
    Knight(Room* position);

    void fight(Enemy *);

    QString introduceYourself() const;
};

#endif // KNIGHT_H
