#include <iostream>
using namespace std;

const int NUM_OTTERS = 3;
const int NUM_DAYS = 6;

// Function prototypes
void get_data(int data[][NUM_DAYS]);
void display_data(const int data[][NUM_DAYS]);
double average_per_day(const int data[][NUM_DAYS]);
int least_food(const int data[][NUM_DAYS]);
int greatest_food(const int data[][NUM_DAYS]);

int main()
{
    cout << "Otter Appetites\n\n";

    int data_table[NUM_OTTERS][NUM_DAYS];

    // Input data
    get_data(data_table);

    // Display table
    display_data(data_table);

    // Report
    cout << "\nReport\n";
    cout << "Average food eaten per day (all otters): "
         << average_per_day(data_table) << endl;

    cout << "Least amount eaten by any otter: "
         << least_food(data_table) << endl;

    cout << "Greatest amount eaten by any otter: "
         << greatest_food(data_table) << endl;

    return 0;
}
void get_data(int data[][NUM_DAYS])
{
    for (int i = 0; i < NUM_OTTERS; i++)
    {
        cout << "\nEnter food data for Otter " << i + 1 << endl;

        for (int j = 0; j < NUM_DAYS; j++)
        {
            do
            {
                cout << " Day " << j + 1 << ": ";
                cin >> data[i][j];

                if (data[i][j] < 0)
                    cout << "  Invalid input. Enter a non-negative number.\n";

            } while (data[i][j] < 0);
        }
    }
}

void display_data(const int data[][NUM_DAYS])
{
    cout << "\nFood Consumption Table (lbs)\n";

    for (int i = 0; i < NUM_OTTERS; i++)
    {
        cout << "Otter " << i + 1 << ": ";

        for (int j = 0; j < NUM_DAYS; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}

double average_per_day(const int data[][NUM_DAYS])
{
    int total = 0;

    for (int i = 0; i < NUM_OTTERS; i++)
        for (int j = 0; j < NUM_DAYS; j++)
            total += data[i][j];

    return static_cast<double>(total) / NUM_DAYS;
}

int least_food(const int data[][NUM_DAYS])
{
    int min = data[0][0];

    for (int i = 0; i < NUM_OTTERS; i++)
        for (int j = 0; j < NUM_DAYS; j++)
            if (data[i][j] < min)
                min = data[i][j];

    return min;
}

int greatest_food(const int data[][NUM_DAYS])
{
    int max = data[0][0];

    for (int i = 0; i < NUM_OTTERS; i++)
        for (int j = 0; j < NUM_DAYS; j++)
            if (data[i][j] > max)
                max = data[i][j];

    return max;
}
