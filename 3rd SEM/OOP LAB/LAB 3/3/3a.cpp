//default argument
#include <iostream>

using namespace std;

void output(char c_167 = '*', int n_167 = 80)
{
    for (int i = 0; i < n_167; i++)
    {
        cout << c_167;
    }
}

int main()
{
    int a_167 = 10;
    char b_167 = '%';
    output(b_167, a_167);
    cout << endl;
    output();
    cout << endl;
    output('#');
    return 0;
}