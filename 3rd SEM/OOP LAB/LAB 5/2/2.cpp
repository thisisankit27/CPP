#include <iostream>
using namespace std;

class timeclock
{
    int hour;
    int min;

public:
    timeclock()
    {
        hour = 0;
        min = 0;
    }
    timeclock(int h, int m)
    {
        hour = h;
        min = m;
    }
    void display()
    {
        if (hour > 9 && min > 9)
            cout << hour << ":" << min << endl;
        else if (hour > 9 && min <= 9)
            cout << hour << ":0" << min << endl;
        else if (hour <= 9 && min > 9)
            cout << "0" << hour << ":" << min << endl;
        else
            cout << "0" << hour << ":0" << min << endl;
    }
};

int main()
{
    cout << "Default: \n";
    timeclock t1;
    t1.display();
    cout << "\n";
    int hour, min;
    cout << "Enter Hour: ";
    cin >> hour;
    cout << "Enter Minutes: ";
    cin >> min;
    timeclock t2(hour, min);
    cout << "Custom: \n";
    t2.display();
    return 0;
}