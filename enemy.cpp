#include <algorithm>
#include "enemy.h"

using namespace std;

Enemy::Enemy(int _health) : Character(_health) {}

int Enemy::defense(int power)
{
    int copyHealth = health;
    health -= power;
    return min(max(0, copyHealth), power);
}
