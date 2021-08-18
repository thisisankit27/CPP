#include <iostream>
#include <string>
using namespace std;

class student
{
    char name_167[20];
    int roll_167;
    int marks_167;
    static int avg;

public:
    void input_data()
    {
        cin.ignore();
        cout << "Enter name: ";
        cin.getline(name_167, 20);
        cout << "Enter Roll: ";
        cin >> roll_167;
        cout << "Enter Marks: ";
        cin >> marks_167;
    }
    friend int calc(student ar[], int n);
};

int student::avg;

int calc(student ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ar[i].avg += ar[i].marks_167;
    }
    return (ar[0].avg / n);
}

int main()
{
    int n = 0;
    cout << "Enter No. of Students: ";
    cin >> n;
    student *obj = (student *)malloc(n * sizeof(student)); //DMA for array of class object
    if (!obj)
    {
        cout << "Insufficient Memory!";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            obj[i].input_data();
        }
        cout << "Average Marks: " << calc(obj, n);
    }
    return 0;
}