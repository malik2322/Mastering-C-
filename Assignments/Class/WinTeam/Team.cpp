#include <iostream>
#include <iomanip>
#include "Team.h"
using namespace std;

// TODO: Implement mutator functions -
//       SetName(), SetWins(), SetLosses()
void Team::SetName(string n)
{
    this->name = n;
}
void Team::SetLosses(int losses)
{
    this->losses = losses;
}
void Team::SetWins(int wins)
{
    this->wins = wins;
}
// TODO: Implement accessor functions -
//       GetName(), GetWins(), GetLosses()
string Team::GetName() const
{
    return name;
}

int Team::GetWins() const
{
    return wins;
}

int Team::GetLosses() const
{
    return losses;
}
// TODO: Implement GetWinPercentage()
double Team::GetWinPercentage() const
{
    int total = double(wins) + losses;
    // cout << fixed << setprecision(2);
    if (total == 0)
    {
        return 0.0;
    }
    else
    {
        return double(wins) / total;
    }
}
// TODO: Implement PrintStanding()

void Team::PrintStanding()
{
    double winPercentage = GetWinPercentage();
    cout << fixed << setprecision(2) << "Win percentage: " << winPercentage << endl;

    // cout << "Win percentage: " << winPercentage << endl;

    if (winPercentage > 0.5)
    {
        cout << "Congratulations, Team " << name << " has a winning average!" << endl;
    }
    else
    {
        cout << "Team " << name << " has a losing average." << endl;
    }
}
