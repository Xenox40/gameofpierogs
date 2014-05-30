#include <algorithm>
#include "room.h"

using namespace std;

Room::Room(QString _description) : description(_description)
{
    qRegisterMetaType<Room::Direction>("Direction");
}

QString Room::getDescription() const {
    return description;
}

vector<Character*> Room::getContent()
{
    return content;
}

void Room::addCharacter(Character* character)
{
    content.push_back(character);
}

void Room::removeCharacter(Character* character)
{
    vector<Character*>::iterator it = find(content.begin(), content.end(), character);
    if(it != content.end())
        content.erase(it);
}

Room* Room::getNeighbour(Room::Direction dir) 
{
    return adjacent[dir];
}

Room::Direction Room::reverseDirection(Room::Direction dir)
{
    return Room::Direction((dir+2)%4);
}

void Room::bind(Room* newNeighbour, Room::Direction dir)
{
    adjacent[dir] = newNeighbour;
    newNeighbour->adjacent[reverseDirection(dir)] = this;
}
