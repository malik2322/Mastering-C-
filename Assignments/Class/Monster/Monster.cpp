// Constructor
#include <iostream>
#include <string>
using namespace std;
#include "Monster.h"

Monster::Monster(string n, int h)
{
    nickname = n;
    health = h;
}

// Setters
void Monster::setNickname(string n)
{
    nickname = n;
}

void Monster::setHealth(int h)
{
    health = h;
}

// Getters
string Monster::getNickname() const
{
    return nickname;
}

int Monster::getHealth() const
{
    return health;
}

// Damage calculation
double Monster::damage() const
{
    return (health / 10.0) + 3;
}