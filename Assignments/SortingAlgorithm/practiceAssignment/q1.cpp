
// Question 1:
// Given the following struct to store information about books:

// And the following bubble sort code from class:

#include <iostream>
using namespace std;

struct Book
{
    string title;
    int year;
};

void bubbleSort(Book list[], int size)
{
    bool swapped;
    int comparisons = 0;

    do
    {
        swapped = false;

        for (int i = 0; i < size - 1; i++)
        {
            comparisons++; // count every comparison

            if (list[i].year < list[i + 1].year) // decreasing order
            {
                Book temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
                swapped = true;
            }
        }

    } while (swapped);

    cout << "Total comparisons: " << comparisons << endl;
}

int main()
{
    const int size = 5;

    Book books[size] = {
        {"C++ Basics", 2001},
        {"Data Structures", 1998},
        {"AI Revolution", 2022},
        {"Algorithms", 1876},
        {"Cyber Security", 2015}};

    cout << "Before sorting:\n";
    for (int i = 0; i < size; i++)
        cout << books[i].title << " (" << books[i].year << ")\n";

    bubbleSort(books, size);

    cout << "\nAfter sorting:\n";
    for (int i = 0; i < size; i++)
        cout << books[i].title << " (" << books[i].year << ")\n";
}
// Rewrite the bubble sort function to do the following:
// A. Fix the bug!!

// B. Make it sort an array of Book structs on the year field, in decreasing order (highest
// year (most recent) to lowest year).
// • Hint: you can use the assignment operator on an entire struct, you don’t need to do it
// field by field (member by member).

// C. Make it output a count of how many times it compares (a field from) one array
// element to another. It should output the count only once.
// • Hint: do not count only when the comparison is true, but whenever the comparison is
// made (true or false).