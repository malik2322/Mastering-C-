

#include <iostream>
using namespace std;
//  Suppose we have an array of structures patients. Each
// patient has multiple members, for example, age, name, health
// condition, etc. Suppose the array is sorted based on the age
// field. Give a patient’s age, and return their health condition.
// Give a patient’s name, and return their health condition.

struct Patient
{
    string name;
    int age;
    string healthCondition;
};

int binary_search(Patient arr[], int size, int targetAge, string targetName)
{
    cout << "fucntion working..." << endl;
    int first, last, middle, position;
    bool flag = false;
    first = 0;
    last = size - 1;
    position = -1;

    while (!flag && first <= last)
    {
        // middle = (last - first) / 2;
        middle = first + (last - first) / 2;

        if (arr[middle].age == targetAge)
        {
            flag = true;
            position = middle;
        }
        else if (arr[middle].age < targetAge)
        {

            // first = middle + 1; // avoid the first half

            last = middle - 1; // avoid the secondd half
        }
        else
        {
            // last = middle - 1; // avoid the second half

            first = middle + 1; // avoid the first half
        }
    }
    return position;
}
int main()
{
    cout << "Welocme " << endl;

    Patient patients;

    Patient patients[4] = {
        {
            patients.name = "Asad",
            patients.age = 18,
            patients.healthCondition = "Good",
        },
        {
            patients.name = "Shaher",
            patients.age = 21,
            patients.healthCondition = "very good",
        },
        {
            patients.name = "Shayan",
            patients.age = 17,
            patients.healthCondition = "Excellent",
        },
        {
            patients.name = "Rayan",
            patients.age = 12,
            patients.healthCondition = "fantastic",
        },
    };
    int size;
    int targetAge;
    string targetName, userInput;
    cout << "Enter age or name to find the patient data" << endl;
    if (userInput == "age")
    {
        cout << " Enter the target age: " << endl;
        cin >> targetAge;
    }
    else if (userInput == "name")
    {
        cout << " Enter the target name: " << endl;

        cin >> targetName;
    }

    string result = binary_search(patients, size, targetAge, targetName);
}