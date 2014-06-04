#ifndef WORLD_H
#define WORLD_H

#include "hero.h"

class World {
protected:
    Hero* hero;

public:
    World();

    void initSample();
  
    const Room* currentRoom() const;
    Room* currentRoom();
    const Hero* getHero() const;
    Hero* getHero();
};
    

#endif
