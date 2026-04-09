#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

int main()
{
    // Create monsters
    Monster dragon("Dragon", 100);
    Monster goblin("Goblin", 50);

    // Display monster info
    cout << "Monster 1: " << dragon.getNickname() << " - Health: " << dragon.getHealth() << " - Damage: " << dragon.damage() << endl;
    cout << "Monster 2: " << goblin.getNickname() << " - Health: " << goblin.getHealth() << " - Damage: " << goblin.damage() << endl;

    // Modify health
    dragon.setHealth(80);
    goblin.setHealth(30);

    cout << "\nAfter damage:" << endl;
    cout << "Monster 1: " << dragon.getNickname() << " - Health: " << dragon.getHealth() << " - Damage: " << dragon.damage() << endl;
    cout << "Monster 2: " << goblin.getNickname() << " - Health: " << goblin.getHealth() << " - Damage: " << goblin.damage() << endl;

    return 0;
}