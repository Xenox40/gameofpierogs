#include "hero.h"

Hero::Hero(Room *_position, int _health, int _power)
    : Character(_health), position(_position), power(_power)
{
}

void Hero::attack(Enemy *enemy)
{
    int injury = enemy->defense(power);
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

int Hero::defense(int)
{
    health = 0;
    return 0;
}
