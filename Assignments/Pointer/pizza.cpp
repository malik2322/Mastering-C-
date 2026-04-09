#include <iostream>
#include <iomanip>
using namespace std;

// modify this:
double pizza(int people, int *pizzas, int *slices)
{
    int totalSlices = people * 3;
    *pizzas = totalSlices / 8;
    *slices = totalSlices % 8;
    cout << fixed << setprecision(2);

    cout << *pizzas << "pizzas and " << *slices << " individual slices. " << "Cost: $";
    return *pizzas * 11.95 + *(slices) * 1.75;
}

int main()
{

    /* Type your code here. */
    int pizza_var = 0;
    int slices = 0;

    int *pizza_point = &pizza_var;
    int *slices_point = &slices;

    int num_people;
    cout << "Enter peoples" << endl;
    cin >> num_people;

    double pizza_compute = pizza(num_people, pizza_point, slices_point);
    cout << pizza_compute << endl;
    return 0;
}
