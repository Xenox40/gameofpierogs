#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class Enemy : public Character
{
protected:
    Enemy(int _health);

public:
    // takes the power of attack, changes health and 
    // returns injury to the aggressor
    int defense(int power);
};

#endif // ENEMY_H
