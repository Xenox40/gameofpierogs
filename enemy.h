#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class Enemy : public Character
{
protected:
    Enemy(int _health);

public:
    int defendYourself(int power);
};

#endif // ENEMY_H
