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
    Room *d = new Room(t.arg("cucumbers"));
    Room *e = new Room(t.arg("tomatoes"));
    Room *f = new Room(t.arg("potatoes"));

    a->bind(b, Room::EAST);
    a->bind(f, Room::NORTH);
    b->bind(c, Room::SOUTH);
    b->bind(d, Room::NORTH);
    d->bind(e, Room::EAST);
    d->bind(f, Room::WEST);

    hero = new Knight(a);
    Dragon* drag = new Dragon[3];

    a->addCharacter(&drag[0]);
    c->addCharacter(&drag[1]);
    c->addCharacter(&drag[2]);
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
