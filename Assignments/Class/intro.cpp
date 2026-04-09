

#include <iostream>
#include <string>
using namespace std;

class Time
{
private:
    int minute;
    int hour;

public:
    void add_hour();
    void add_min();
    void set_min(int min);
    void set_hour(int hr);
    int get_min();
    int get_hour();
    string display_time();
};

void Time::add_hour()
{
    hour++;
}
void Time::add_min()
{
    minute++;
}
void Time::set_min(int min)
{
    minute = min;
}

void Time::set_hour(int hr)
{
    hour = hr;
}

int Time::get_hour()
{
    return hour;
}
int Time::get_min()
{
    return minute;
}

string Time::display_time()
{
    return to_string(hour) + " : " + to_string(minute);
}

int main()
{
    cout << "Main is working... " << endl;

    Time clock_01;
    clock_01.set_hour(2);
    clock_01.set_min(30);
    cout << "display_time: " << clock_01.display_time() << " " << endl;
}