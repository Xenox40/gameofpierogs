#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class Enemy : public Character
{
protected:
    Enemy(int _health);

public:
    int defense(int power);
};

#endif // ENEMY_H
