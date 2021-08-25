#include <iostream>
using namespace std;
int x = 10; // Global x
int main()
{
    int x = 20; // Local x
    {
        int k = x;
        int x = 30;
        cout << "k = " << k << endl;
        cout << "x = " << x << endl;
        cout
            << "::x = " << ::x << endl;
    }
    cout << "x = " << x << endl;
    cout
        << "::x = " << ::x << endl;
    return 0;
}
