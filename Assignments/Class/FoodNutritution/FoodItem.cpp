#include "FoodItem.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Define default constructor
FoodItem::FoodItem()
    : name("Water"), fat(0.0), carbs(0.0), protein(0.0)
{
}

// Define second constructor with parameters
// to initialize private data members
FoodItem::FoodItem(string n, double f, double c, double pro)
    : name(n), fat(f), carbs(c), protein(pro)
{
}

string FoodItem::GetName() const
{
    return name;
}

double FoodItem::GetFat() const
{
    return fat;
}

double FoodItem::GetCarbs() const
{
    return carbs;
}

double FoodItem::GetProtein() const
{
    return protein;
}

double FoodItem::GetCalories(double numServings) const
{
    // Calorie formula
    double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
    return calories;
}

void FoodItem::PrintInfo() const
{
    cout << fixed << setprecision(2);
    cout << "Nutritional information per serving of " << name << ":" << endl;
    cout << "  Fat: " << fat << " g" << endl;
    cout << "  Carbohydrates: " << carbs << " g" << endl;
    cout << "  Protein: " << protein << " g" << endl;
}