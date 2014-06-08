#include "knight.h"

Knight::Knight(Room* position) : Hero(position, 30, 10, true) {}

QString Knight::introduceYourself() const 
{
    if(shield == true)
        return "Knight with shield";
    else
        return "Knight";
}
