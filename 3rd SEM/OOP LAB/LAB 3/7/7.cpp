#include <iostream>
using namespace std;

void SUM(int a, int b = 10, int c = 20)
{
    cout << a + b + c << endl;
}

int main()
{
    int a_167, b_167, c_167;
    cout << "Enter three numbers: ";
    cin >> a_167 >> b_167 >> c_167;
    cout << "3 Args: ";
    SUM(a_167, b_167, c_167);
    cout << "2 Args: ";
    SUM(a_167, b_167);
    cout << "1 Args: ";
    SUM(a_167);
    return 0;
}
