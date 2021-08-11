//1. Print Hello Followed by your Name

#include <iostream>

using namespace std;

int main()
{
    char name_167[50];
    cout << "Enter your Name: ";
    cin.getline(name_167, 50);
    cout << "Hello " << name_167 << endl;
    return 0;
}
