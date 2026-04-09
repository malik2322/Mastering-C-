#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team
{
    // TODO: Declare private data members - name, wins, losses
private:
    string name;
    int wins;
    int losses;
    // TODO: Declare mutator functions -
    //       SetName(), SetWins(), SetLosses()
public:
    // constructor

    Team()
    {
        // cout << "Inside the Constructor called" << endl;
        name = "";
        wins = 0;
        losses = 0;
    };

    void SetName(string name);
    void SetLosses(int wins);
    void SetWins(int losses);

    // TODO: Declare accessor functions -
    //       GetName(), GetWins(), GetLosses()
    string GetName() const;
    int GetWins() const;
    int GetLosses() const;

    // TODO: Declare GetWinPercentage()
    double GetWinPercentage() const;

    // TODO: Declare PrintStanding()
    void PrintStanding();
};

#endif