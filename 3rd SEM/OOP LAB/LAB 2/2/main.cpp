//2. Store Student data and Display

#include <iostream>

using namespace std;

class student
{
    char name_167[50];
    int roll_167;
    int total_167;

public:
    void setdata();
    void display();
};

void student::setdata()
{
    cout << "Enter your Name: ";
    cin.getline(name_167, 50);
    cout << "Enter Roll No.: ";
    cin >> roll_167;
    cout << "Enter Total Marks: ";
    cin >> total_167;
}

void student::display()
{
    cout << "Name: " << name_167 << endl;
    cout << "Roll No.: " << roll_167 << endl;
    cout << "Total Marks: " << total_167 << endl;
}

int main()
{
    student r;
    r.setdata();
    r.display();
    return 0;
}
