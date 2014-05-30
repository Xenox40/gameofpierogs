#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include <QString>
#include "character.h"

class Room
{
public:
    enum Directions {
        NORTH, WEST, SOUTH, EAST
    };

private:
    QString description;
    std::vector<Character*> content;

public:
    Room(QString _description);

    Room* adjacent[4];

    QString getDescription() const;
    std::vector<Character*> getContent();

    void addCharacter(Character*);
    void removeCharacter(Character*);
};

#endif // ROOM_H
