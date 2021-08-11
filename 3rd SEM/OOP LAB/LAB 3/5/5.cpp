#include <iostream>

using namespace std;

inline int increment(int n)
{
    return ++n;
}

int main()
{
    cout << "Enter Number: ";
    int n_167;
    cin >> n_167;
    cout << "Incremented value = " << increment(n_167) << endl;
    return 0;
}