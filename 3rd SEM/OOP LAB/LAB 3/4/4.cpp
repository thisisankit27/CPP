#include <iostream>

using namespace std;

inline int square(int n)
{
    return n * n;
}

inline int cube(int n)
{
    return n * n * n;
}

int main()
{
    cout << "Enter Number: ";
    int n_167;
    cin >> n_167;
    cout << "Square = " << square(n_167) << endl;
    cout << "Cube = " << cube(n_167) << endl;
    return 0;
}