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

void Hero::move(Room *newPosition)
{
    position = newPosition;
}

Room* Hero::getPosition()
{
    return position;
}
