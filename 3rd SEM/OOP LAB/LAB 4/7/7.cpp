#include <iostream>

using namespace std;
class two;
class one
{
    int feet1_167;
    int inch1_167;
    double dist1_167;

    static double total_167;

public:
    void getdata()
    {
        cout << "Enter feet: ";
        cin >> feet1_167;
        cout << "Enter inche: ";
        cin >> inch1_167;
        dist1_167 = feet1_167 + (float)(inch1_167 / 12); //all ditance converted to feets
    }
    void display()
    {
        cout << "Total Distance: " << total_167 << endl;
    }
    double bigger(one *num1, two *num2);
};
class two
{
    int meter2_167;
    int cmeter2_167;
    int dist2_167;

public:
    void getdata()
    {
        cout << "Enter meter: ";
        cin >> meter2_167;
        cout << "Enter centimeter: ";
        cin >> cmeter2_167;
        dist2_167 = meter2_167 + (float)(cmeter2_167 / 100); //all ditance converted to meter
    }
    friend double one::bigger(one *num1, two *num2);
};

double one::total_167;

double one::bigger(one *num1, two *num2)
{
    total_167 = num1->dist1_167 + (num2->dist2_167) / 2.381f; //meter to feet
    return total_167;
}

int main()
{
    one a;
    two b;
    a.getdata();
    b.getdata();
    cout << "Total Distance " << a.bigger(&a, &b) << " ft\n";
    return 0;
}