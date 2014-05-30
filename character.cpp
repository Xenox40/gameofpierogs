#include "character.h"

Character::Character(int _health) : health(_health) {}

bool Character::isDead() const
{
    return health<=0;
}

int Character::getHealth() const
{
    return health;
}


