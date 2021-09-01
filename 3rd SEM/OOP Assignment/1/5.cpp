#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class students
{
    int marks[5];
    long long int roll;
    static int classAvg;
    static int above;
    static int below;
    static int equal;

public:
    string name;
    int studentAvg;
    void getdata();
    void avg_marks();
    void display();
    friend void class_avg(int n);
    friend void compare_avg(int avg);
    friend void printCompare();
};

int students::classAvg = 0;
int students::above = 0;
int students::below = 0;
int students::equal = 0;

void students::getdata()
{
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> roll;
    cout << "Enter Marks in 5 Subjects: ";
    for (int i = 0; i < 5; ++i)
    {
        cin >> marks[i];
    }
    avg_marks();
}
void students::avg_marks()
{
    studentAvg = 0;
    for (int i = 0; i < 5; ++i)
    {
        studentAvg += marks[i];
    }
    studentAvg /= 5;
    classAvg += studentAvg;
}

void class_avg(int n)
{
    students::classAvg /= n;
}

void compare_avg(int avg)
{
    if (avg > students::classAvg)
    {
        ++students::above;
    }
    else if (avg < students::classAvg)
    {
        ++students::below;
    }
    else
    {
        ++students::equal;
    }
}

void printCompare()
{
    cout << "No. of Students above Class Avg: " << students::above << endl;
    cout << "No. of Students equal Class Avg: " << students::equal << endl;
    cout << "No. of Students below Class Avg: " << students::below << endl;
}

void students::display()
{
    cout << name << setw(10) << roll << setw(10) << studentAvg << endl;
}

int main()
{
    int n;
    cout << "Enter Number of Students: ";
    cin >> n;
    students *ar = new students[n];
    for (int i = 0; i < n; ++i)
    {
        ar[i].getdata();
    }
    class_avg(n);
    for (int i = 0; i < n; ++i)
    {
        compare_avg(ar[i].studentAvg);
    }
    printCompare();
    for (int i = 0; i < n; ++i)
    {
        int counter = 0;
        while (counter < n - 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (ar[i].studentAvg > ar[i + 1].studentAvg)
                {
                    students temp = ar[i];
                    ar[i] = ar[i + 1];
                    ar[i + 1] = temp;
                }
            }
            counter++;
        }
    }
    int max = -1, flag;
    cout << "Name" << setw(10) << "Roll" << setw(10) << "Avg Marks" << endl;
    for (int i = 0; i < n; i++)
    {
        ar[i].display();
        if (max <= ar[i].studentAvg)
            flag = i;
    }
    cout << "Topper of class: " << ar[flag].name << endl;
    return 0;
}