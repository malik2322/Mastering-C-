
#ifndef FOODITEMH
#define FOODITEMH

#include <string>

class FoodItem
{
private:
    std::string name;
    double fat;
    double carbs;
    double protein;

public:
    FoodItem();

    FoodItem(std::string n, double f, double c, double pro);

    string GetName() const;

    double GetFat() const;

    double GetCarbs() const;

    double GetProtein() const;

    double GetCalories(double numServings) const;

    void PrintInfo() const;
};

#endif
