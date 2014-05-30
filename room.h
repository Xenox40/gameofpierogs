#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include <QObject>
#include <QString>
#include "character.h"

class Room
{
public:
    enum Direction {
        NORTH=0, WEST, SOUTH, EAST
    };

protected:
    QString description;
    std::vector<Character*> content;

    Room* adjacent[4];

public:
    Room(QString _description);

    QString getDescription() const;
    std::vector<Character*> getContent();

    void addCharacter(Character*);
    void removeCharacter(Character*);

    static Direction reverseDirection(Direction dir);

    Room* getNeighbour(Direction dir);
    void bind(Room* newNeighbour, Direction dir);
};

Q_DECLARE_METATYPE(Room::Direction)

#endif // ROOM_H
