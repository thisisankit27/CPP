#include <iostream>
#include <math.h>
#define pi 3.14

using namespace std;

void area(int r);
void area(int l, int b);
void area(int a, int b, int c);

int main()
{
    int a_167, b_167, c_167;
    cout << "Enter Radius of Circle: ";
    cin >> a_167;
    area(a_167);
    cout << "Enter Length Breadth of Rectangle: ";
    cin >> a_167 >> b_167;
    area(a_167, b_167);
    cout << "Enter sides of triangle: ";
    cin >> a_167 >> b_167 >> c_167;
    area(a_167, b_167, c_167);
    return 0;
}

void area(int r)
{
    cout << "Area of Circle= " << (pi * r * r) << endl;
}

void area(int l, int b)
{
    cout << "Area of Rectangle= " << (l * b) << endl;
}

void area(int a, int b, int c)
{
    //sum of two sides must be greater or eaqual than third
    if ((a + b <= c) || a + c <= b || b + c <= a)
    {
        printf("Not a valid triangle");
        exit(0);
    }
    float s = (a + b + c) / 2;
    cout << "Area of Triangle= " << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;
}