#include <algorithm>
#include "room.h"

using namespace std;

Room::Room(QString _description) : description(_description) {}

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
