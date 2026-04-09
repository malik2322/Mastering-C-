#include <iostream>
#include <string>
#include "Team.h"
using namespace std;

int main()
{
    string name;
    int wins;
    int losses;
    Team team;

    // cout << "Constructor called" << endl;

    Team team_02;

    Team::Team();
    cout << "Constructor called" << endl;

    cout << "Enter the name: " << endl;
    cin >> name;
    cout << "Enter the wins: " << endl;

    cin >> wins;
    cout << "Enter the losses: " << endl;

    cin >> losses;

    team.SetName(name);
    team.SetWins(wins);
    team.SetLosses(losses);

    team.PrintStanding();

    return 0;
}