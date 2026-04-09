#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
#include <string>
using namespace std;

class Monster
{
private:
    string nickname;
    int health;

public:
    // Constructor
    Monster(string n, int h);

    // Setters
    void setNickname(string n);
    void setHealth(int h);

    // Getters
    string getNickname() const;
    int getHealth() const;

    // Damage function
    double damage() const;
};

#endif