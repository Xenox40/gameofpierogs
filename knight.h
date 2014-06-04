#ifndef KNIGHT_H
#define KNIGHT_H

#include "hero.h"

class Knight : public Hero
{
public:
    Knight(Room* position);

    QString introduceYourself() const;
};

#endif // KNIGHT_H
