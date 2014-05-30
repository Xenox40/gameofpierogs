#include "knight.h"

Knight::Knight(Room* position) : Hero(position, 30, 5) {}

QString Knight::introduceYourself() const 
{
    return "Knight";
}
