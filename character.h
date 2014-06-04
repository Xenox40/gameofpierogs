#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>

class Character
{
protected:
    int health;

public:
    Character(int _health);

    virtual QString introduceYourself() const=0;
    bool isDead() const;
    int getHealth() const;

    // takes the power of attack, changes health and
    // returns injury to the aggressor
    virtual int defendYourself(int power);

};

#endif // CHARACTER_H
