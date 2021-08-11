#include <iostream>
using namespace std;

void swappingVal(int a, int b)
{ //by-value
    a += b;
    b = a - b;
    a -= b;
    cout << "In func " << a << " " << b << endl;
}

void swappingAdd(int *a, int *b)
{ //by-Address
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

void swappingReff(int &p, int &q)
{ //by-reff
    p += q;
    q = p - q;
    p -= q;
}

int main()
{
    int a_167, b_167;
    cout << "Enter two numbers: ";
    cin >> a_167 >> b_167;
    cout << "Call by value " << endl;
    swappingVal(a_167, b_167);
    cout << "In main" << a_167 << " " << b_167 << endl;
    cout << "Call by Address ";
    swappingAdd(&a_167, &b_167);
    cout << a_167 << " " << b_167 << endl;
    cout << "Call by Reff ";
    swappingReff(a_167, b_167);
    cout << a_167 << " " << b_167 << endl;
}