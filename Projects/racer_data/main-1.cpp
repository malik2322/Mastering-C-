#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

struct Result
{
    int bibNumber;
    string name;
    double distance;
    string time;
};

void readDataset(ifstream &in, Result results[], int &size);
void displayDataset(Result results[], int size);
int linearSearchByName(Result results[], int size, string targetName);
int binarySearchByNumber(Result results[], int size, int targetNumber);
void sortByNumber(Result results[], int size);
void sortByDistanceTime(Result results[], int size);
void displayMenu();
void displayHeader();

int main()
{
    const int MAX_SIZE = 100;
    Result results[MAX_SIZE];
    int size = 0;

    ifstream in("data_set.txt");
    if (!in)
        return 1;

    readDataset(in, results, size);
    in.close();

    int choice;

    do
    {
        displayMenu();

        cin >> choice;

        while (cin.fail() || choice < 1 || choice > 5)
        {
            cout << "Please, enter 1, 2, 3, 4 or 5: ";
            cin.clear();
            cin.ignore(10000, '\n');
            cin >> choice;
        }

        cin.ignore(10000, '\n');

        if (choice == 1)
        {
            sortByNumber(results, size);
            displayDataset(results, size);
        }
        else if (choice == 2)
        {
            sortByDistanceTime(results, size);
            displayDataset(results, size);
        }
        else if (choice == 3)
        {
            string name;
            cout << "Enter name of a racer to look for: ";
            getline(cin, name);

            int idx = linearSearchByName(results, size, name);
            if (idx != -1)
                cout << "\nThe number of the racer with name "
                     << name << " is: " << results[idx].bibNumber << endl;
            else
                cout << "\nNo racer found with name: " << name << endl;
        }
        else if (choice == 4)
        {
            int num;
            cout << "Enter number of a racer to look for: ";
            cin >> num;
            cin.ignore(10000, '\n');

            sortByNumber(results, size); // IMPORTANT: sort BEFORE binary search

            int idx = binarySearchByNumber(results, size, num);
            if (idx != -1)
            {
                cout << left << setw(7) << results[idx].bibNumber
                     << setw(18) << results[idx].name
                     << right << setw(8) << results[idx].distance
                     << setw(10) << results[idx].time << endl;
            }
            else
                cout << "\nNo racer found with number: " << num << endl;
        }

    } while (choice != 5);

    cout << "Exiting the program..." << endl;
    return 0;
}

void readDataset(ifstream &in, Result results[], int &size)
{
    size = 0;

    while (in >> results[size].bibNumber)
    {
        in.ignore(10000, '\n');
        getline(in, results[size].name);
        in >> results[size].distance;
        in >> results[size].time;
        in.ignore(10000, '\n');
        size++;
    }
}

void displayDataset(Result results[], int size)
{
    displayHeader();

    for (int i = 0; i < size; i++)
    {
        cout << left << setw(7) << results[i].bibNumber
             << setw(18) << results[i].name
             << right << setw(8) << fixed << setprecision(1) << results[i].distance
             << setw(10) << results[i].time
             << endl;
    }
}

int linearSearchByName(Result results[], int size, string targetName)
{
    for (int i = 0; i < size; i++)
        if (results[i].name == targetName)
            return i;
    return -1;
}

int binarySearchByNumber(Result results[], int size, int targetNumber)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (results[mid].bibNumber == targetNumber)
            return mid;
        else if (results[mid].bibNumber < targetNumber)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void sortByNumber(Result results[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (results[j].bibNumber > results[j + 1].bibNumber)
                swap(results[j], results[j + 1]);
}

void sortByDistanceTime(Result results[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (results[j].distance < results[j + 1].distance ||
                (results[j].distance == results[j + 1].distance &&
                 results[j].time > results[j + 1].time))
                swap(results[j], results[j + 1]);
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
    cout << left << setw(7) << "BibNum"
         << setw(18) << "Name"
         << right << setw(8) << "Distance"
         << setw(10) << "Time  " << endl;
}