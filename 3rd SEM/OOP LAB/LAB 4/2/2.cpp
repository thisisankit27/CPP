#include <iostream>

using namespace std;
class two;
class one
{
    int feet1;
    int inch1;
    int meter1;
    int cmeter1;
    double dist1;

public:
    void getdata()
    {
        cout << "Object 1: " << endl;
        cout << "Enter feet: ";
        cin >> feet1;
        cout << "Enter inche: ";
        cin >> inch1;
        cout << "Enter meter: ";
        cin >> meter1;
        cout << "Enter centimeter: ";
        cin >> cmeter1;
        dist1 = feet1 + (float)(inch1 / 12) + (float)(meter1 * 3.281f) + (float)(cmeter1 / 30.48f); //all ditance converted to feets
    }

    friend void bigger(one *num1, two *num2);
};
class two
{
    int feet2;
    int inch2;
    int meter2;
    int cmeter2;
    int dist2;

public:
    void getdata()
    {
        cout << "Object 2: " << endl;
        cout << "Enter feet: ";
        cin >> feet2;
        cout << "Enter inche: ";
        cin >> inch2;
        cout << "Enter meter: ";
        cin >> meter2;
        cout << "Enter centimeter: ";
        cin >> cmeter2;
        dist2 = feet2 + (float)(inch2 / 12) + (float)(meter2 * 3.281f) + (float)(cmeter2 / 30.48f); //all ditance converted to feet
    }
    friend void bigger(one *num1, two *num2);
};

void bigger(one *num1, two *num2)
{
    cout << "Greater amongst the distance(all ditance converted to feet and compared) in given object: ";
    num1->dist1 > num2->dist2 ? cout << "object 1" : cout << "object 2";
    cout << endl;
}

int main()
{
    one a;
    two b;
    a.getdata();
    b.getdata();
    bigger(&a, &b);
    return 0;
}