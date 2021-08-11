#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;

int FUN_VOLUME(int cube_side) //cube
{
    int x = pow(cube_side, 3);
    return (x);
}

int FUN_VOLUME(int cone_height, int radius) //cone
{
    int x = (pi * radius * radius * cone_height) / 3;
    return (x);
}

int FUN_VOLUME(int side1, int side2, int side3) //rectangular cube
{
    int x = side1 * side2 * side3;
    return (x);
}

int main()
{
    int a, b, c, result;
    cout << "Enter side of cube: ";
    cin >> a;
    result = FUN_VOLUME(a);
    cout << "Volume = " << result << endl;
    cout << "Enter Height & Radius of cone: ";
    cin >> a >> b;
    result = FUN_VOLUME(a, b);
    cout << "Volume = " << result << endl;
    cout << "Enter all sides of cuboid: ";
    cin >> a >> b >> c;
    result = FUN_VOLUME(a, b, c);
    cout << "Volume = " << result << endl;
    return 0;
}