#include <iostream>
using namespace std;
// Otter Appetites
// A coastal aquarium wants to keep track of how many pounds of food each of its three otters
// eats each day during a typical 6-day period. Write a program that stores this information in a
// two-dimensional 3×6 array, where each row represents a different otter, and each column
// represents a different day.
// The program should first have the user input the data for each otter. Then, it should create a
// report that includes the following information:
// 1)Average amount of food eaten per day by the whole group of otters.
// 2)The least amount of food eaten during the 6 days by any one otter.
// 3)The greatest amount of food eaten during the 6 days by any one otter.
// Input validation: Do not accept negative numbers for pounds of food eaten.
void display_data(int data_table[][6], int num_otters, int num_days);

int main()
{
    cout << "Otter Appetites" << endl;
    const int num_otters = 3;
    const int num_days = 6;

    int data_table[num_otters][num_days];
    // get_data(data_table);
    cout << "Input the otter daily meal: " << endl;

    for (int i = 0; i < num_otters; i++)
    {
        cout << "outter : " << endl;

        for (int j = 0; j < num_days; j++)
        {
            cin >> data_table[i][j];
        }
    }
    display_data(data_table, num_otters, num_days);
}
// void get_data(int data_table[]);
// {
//     cout << "get_data function testing..." << endl;
// }

void display_data(int data_table[][6], int num_otters, int num_days)
{
    cout << "display_data function testing..." << endl;
    for (int i = 0; i < num_otters; i++)
    {
        for (int j = 0; j < num_days; j++)
        {
            cout << data_table[i][j] << " " << endl;
        }
        cout << endl;
    }
}
