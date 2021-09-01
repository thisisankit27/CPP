#include <iostream>
using namespace std;

class ageCalculator
{
    int pd, pm, py;
    int bd, bm, by;

public:
    ageCalculator()
    {
        cout << " Enter the present date in the format dd mm yyyy : ";
        cin >> pd >> pm >> py;
        cout << " Enter the birth date in the format dd mm yyyy : ";
        cin >> bd >> bm >> by;
    }
    void age();
};

void ageCalculator::age()
{
    int d, m, y;
    int md[12];
    y = py - by;
    if (pm < bm)
    {
        y--;
        m = 12 - (bm - pm);
    }
    else
    {
        m = pm - bm;
    }
    if (pd < bd)
    {
        m--;
        d = md[pm - 1] - (bd - pd);
    }
    else
    {
        d = pd - bd;
    }
    cout << "your age is : ";
    cout << y << " years " << m << " months " << d << " days. ";
}

int main()
{
    ageCalculator a;
    a.age();
    return 0;
}