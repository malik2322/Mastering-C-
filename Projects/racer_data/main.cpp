
/*
Important: Don't change field names/data types or their order. You'll not be able to pass all tests otherwise.

Use a partially filled array of structures to store the results. Use a counter variable to count the number of results that are read in from the file, and use this value as the size of the array for the search and sort functions.

Aside from main your program should have at least these 6 functions:

void readDataset(ifstream& in, Result results[], int &size);
void displayDataset(Result results[], int size);
int linearSearchByName(Result results[], int size, string targetName);
int binarySearchByNumber(Result results[], int size, int targetNumber);
void sortByNumber(Result results[], int size);
void sortByDistanceTime(Result results[], int size);
readDataset. Should read results into results array from the "in" file stream (opened in main). Updates size.
displayDataset. Should nicely print results array (see "Tips" section)
linearSearchByName. Should find the index of a racer's result by their name using a linear search. If no such racer exist return -1.
binarySearchByNumber. Should find the index of a racer's result by their bib number using a binary search. If no such racer exist return -1.
sortByNumber. Should sort results by bibNumber field in ascending order. Must use bubble sort or selection sort algorithm.
sortByDistanceTime. Should sort results by distance (descending) and if two racers have the same distance they should be ordered by time in ascending order. Must use bubble sort or selection sort algorithm.

*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Result
{
    /*
bibNumber - integer number
name - a string
distance - a double
time - a string
    */
    int bibNumber;
    string name;
    double distance;
    string time;
};

void readDataset(ifstream &in, vector<vector<Result>> results, int &size);
void displayDataset(Result results[], int size);
int linearSearchByName(Result results[], int size, string targetName);
int binarySearchByNumber(Result results[], int size, int targetNumber);
void sortByNumber(Result results[], int size);
void sortByDistanceTime(Result results[], int size);

void displayMenu();
void displayHeader();

int main()
{
    cout << "Racer Project..." << endl;
    // Result race_result;
    int size = 100;
    vector<vector<Result>> result_arr(size);
    // path to file
    ifstream in("data_set.txt");

    readDataset(in, result_arr, size);
}

void readDataset(ifstream &in, vector<vector<Result>> &results, int &size)
{
    cout << "readDataset funciton testing... " << endl;
    if (!in.is_open())
    {
        cout << "Error opening file filename.txt" << endl;
    }
    // string testing_line;

    // while (getline(in, testing_line))
    // {
    //     cout << "testing_line:   " << testing_line << endl;
    // }

    for (int i = 0; i < size; i++)
    {
        vector<Result> race_group;

        Result temp_results;

        // vector<temp_results> = results;
        in >> temp_results.bibNumber;
        in.ignore(); // consume space/newline before getline

        getline(in, temp_results.name);
        in.ignore(); // consume space/newline before getline

        in >> temp_results.distance;
        in.ignore(); // consume space/newline before getline

        getline(in, temp_results.time);
        in.ignore(); // consume space/newline before getline
        results.push_back(race_group);
    };
}

void displayMenu()
{
    cout << "\nMenu\n\n";
    cout << "1. Display Results sorted by bib number\n";
    cout << "2. Display Results sorted by distance, then time\n";
    cout << "3. Lookup a bib number given a name\n";
    cout << "4. Lookup a result by bib number\n";
    cout << "5. Quit the Program\n\n";
    cout << "Enter your choice: ";
}

void displayHeader()
{
    cout << left
         << setw(7) << "BibNum"
         << setw(18) << "Name"
         << right
         << setw(8) << "Distance"
         << setw(10) << "Time  "
         << endl;
}