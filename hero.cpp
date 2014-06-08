#include "hero.h"

Hero::Hero(Room *_position, int _health, int _power, bool _shield)
    : Character(_health), position(_position), power(_power), shield(_shield)
{
}

void Hero::attack(Character *character)
{
    int injury = character->defendYourself(power);
    if(shield == true)
        health -= injury / 2;
    else
        health -= injury;

}

bool Hero::canMove(Room::Direction dir) const
{
    return position->getNeighbour(dir) != 0;
}

void Hero::move(Room::Direction dir)
{
    move(position->getNeighbour(dir));
}

Room* Hero::getPosition()
{
    return position;
}

void Hero::move(Room *newPosition)
{
    position = newPosition;
}

void Hero::setShield(bool s)
{
    shield = s;
}

bool Hero::getShield()
{
    return shield;
}
