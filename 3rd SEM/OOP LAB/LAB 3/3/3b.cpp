//function overloading
#include <iostream>

using namespace std;

void output(char c_167, int n_167)
{
    for (int i = 0; i < n_167; i++)
    {
        cout << c_167;
    }
}

void output(char c_167)
{
    for (int i = 0; i < 80; i++)
    {
        cout << c_167;
    }
}

void output(int n_167)
{
    for (int i = 0; i < n_167; i++)
    {
        cout << "*";
    }
}

void output()
{
    for (int i = 0; i < 80; i++)
    {
        cout << "*";
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