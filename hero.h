#ifndef HERO_H
#define HERO_H

#include "room.h"

class Hero : public Character
{
protected:
    Room *position;
    int power;

public:
    Hero(Room *_position, int _health, int _power);

    void attack(Character*);

    bool canMove(Room::Direction) const;
    void move(Room::Direction);

    Room* getPosition();

protected:
    void move(Room*);
};

#endif // HERO_H
