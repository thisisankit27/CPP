#include <iostream>
#include <math.h>
using namespace std;

void areaTriangle(int a)
{
    float area = sqrt(3) / 4 * a * a;
    cout << area << endl;
}

void areaTriangle(int a, int b)
{
    float area = (sqrt(((a * a) - (b * b / 4))) * b) / 2;
    cout << area << endl;
}

void areaTriangle(int a, int b, int c)
{
    float s = (a + b + c) / 2;
    float area = sqrt((s * (s - a) * (s - b) * (s - c)));
    cout << area << endl;
}

int main()
{
    int n = -1;
    while (n)
    {
        cout << "Find:\n";
        cout << "1. Area of scalene triangle\n";
        cout << "2. Area of isosceles triangle\n";
        cout << "3. Area of equilateral triangle\n";
        cout << "Press 0 to exit.\n";
        cout << "Your Choice: ";
        cin >> n;
        switch (n)
        {
            int a, b, c;
        case 0:
            break;
        case 1:
            cout << "Enter 3 sides of triangle: ";
            cin >> a >> b >> c;
            areaTriangle(a, b, c);
            break;
        case 2:
            cout << "Enter 2 sides of triangle: ";
            cin >> a >> b;
            areaTriangle(a, b);
            break;
        case 3:
            cout << "Enter 1 sides of triangle: ";
            cin >> a;
            areaTriangle(a);
            break;
        default:

            cout << "Enter Valid Option!\n";
        }
    }
}