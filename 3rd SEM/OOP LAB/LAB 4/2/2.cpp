#include <iostream>

using namespace std;
class two;
class one
{
    int feet1_167;
    int inch1_167;
    double dist1_167;

public:
    void getdata()
    {
        cout << "Object 1: " << endl;
        cout << "Enter feet: ";
        cin >> feet1_167;
        cout << "Enter inche: ";
        cin >> inch1_167;
        dist1_167 = feet1_167 + (float)(inch1_167 / 12); //all ditance converted to feets
    }

    friend void bigger(one *num1, two *num2);
};
class two
{
    int meter2_167;
    int cmeter2_167;
    double dist2_167;

public:
    void getdata()
    {
        cout << "Object 2: " << endl;
        cout << "Enter meter: ";
        cin >> meter2_167;
        cout << "Enter centimeter: ";
        cin >> cmeter2_167;
        dist2_167 = meter2_167 + (float)(cmeter2_167 / 100); //all ditance converted to meter
        dist2_167 *= 3.281f;                                 //meter to foot
    }
    friend void bigger(one *num1, two *num2);
};

void bigger(one *num1, two *num2)
{
    cout << "Greater amongst the distance in given object: ";
    num1->dist1_167 > num2->dist2_167 ? cout << "object 1" : cout << "object 2";
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