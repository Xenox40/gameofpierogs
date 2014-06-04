#include <QString>

#include "dragon.h"
#include "knight.h"
#include "world.h"

World::World()
{
    initSample();
}

void World::initSample()
{
    QString t = "Secret room hiding %1";
    Room *a = new Room(t.arg("cucumbers"));
    Room *b = new Room(t.arg("tomatoes"));
    Room *c = new Room(t.arg("potatoes"));

    a->bind(b, Room::EAST);
    b->bind(c, Room::SOUTH);

    hero = new Knight(a);
    Dragon* d = new Dragon[3];

    a->addCharacter(&d[0]);
    c->addCharacter(&d[1]);
    c->addCharacter(&d[2]);
}

const Room* World::currentRoom() const
{
    return hero->getPosition();
}

Room* World::currentRoom()
{
    return hero->getPosition();
}

const Hero* World::getHero() const
{
    return hero;
}

Hero* World::getHero()
{
    return hero;
}
