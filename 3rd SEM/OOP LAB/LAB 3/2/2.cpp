#include <iostream>
#include <math.h>
#define pi 3.14

using namespace std;

void volume(int r);
void volume(int l, int b);
void volume(int a, int b, int c);

int main()
{
    int a_167, b_167, c_167;
    cout << "Enter Radius of sphere: ";
    cin >> a_167;
    volume(a_167);
    cout << "Enter Length radius of cylinder: ";
    cin >> a_167 >> b_167;
    volume(a_167, b_167);
    cout << "Enter length breadth height of cuboid: ";
    cin >> a_167 >> b_167 >> c_167;
    volume(a_167, b_167, c_167);
    return 0;
}

void volume(int r)
{
    cout << "Volume Of Sphere= " << (4 * pi * r * r * r) / 3 << endl;
}

void volume(int l, int r)
{
    cout << "Volume Of Cylinder= " << (pi * r * r * l) << endl;
}

void volume(int a, int b, int c)
{
    cout << "Volume of Cuboid= " << (a * b * c) << endl;
}