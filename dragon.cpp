#include <cstdlib>
#include "dragon.h"

Dragon::Dragon() : Enemy(10) {}

QString Dragon::introduceYourself() const
{
    if(rand()%2)
        return "Dragon imitating a Duck";
    else
        return "Quack";
}
