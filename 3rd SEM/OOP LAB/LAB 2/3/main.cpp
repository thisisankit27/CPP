//3. Modify 2nd Program to store 5 subjects, total marks, percentage

#include <iostream>

using namespace std;

class student
{
    char name_167[50];
    int roll_167;
    int marks_167[5];
    int total_167;
    int percentage_167;

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
    total_167 = 0;
    cout << "Enter Marks in 5 Subjects: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Mark: ";
        cin >> marks_167[i];
        total_167 += marks_167[i];
    }
    percentage_167 = total_167 / 5;
}

void student::display()
{
    cout << "Name: " << name_167 << endl;
    cout << "Roll No.: " << roll_167 << endl;
    cout << "Total Marks: " << total_167 << " out of 500" << endl;
    cout << "Percentage: " << percentage_167 << "%" << endl;
}

int main()
{
    student r;
    r.setdata();
    r.display();
    return 0;
}
