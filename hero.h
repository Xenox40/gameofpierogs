#ifndef HERO_H
#define HERO_H

#include "enemy.h"
#include "room.h"

class Hero : public Character
{
protected:
    Room *position;
    int power;

public:
    Hero(Room *_position, int _health, int _power);

    void attack(Enemy*);
    void move(Room*);
    Room* getPosition();

};

#endif // HERO_H