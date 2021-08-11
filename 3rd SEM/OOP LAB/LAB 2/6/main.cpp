//6. Emp, gross salary

#include <iostream>
using namespace std;

class emp
{
    char id_167[50];
    char name_167[50];
    int age_167;
    long int pay_167;
    long int gross_167;

public:
    void getdata();
    void display();
};

void emp::getdata()
{

    cin.ignore();
    cout << "ID: ";
    gets(id_167);
    cout << "Name: ";
    gets(name_167);
    cout << "Age: ";
    cin >> age_167;
    cout << "pay: ";
    cin >> pay_167;
}

void emp::display()
{

    int hr = (pay_167)*0.8;
    int dr = (pay_167)*0.1;
    gross_167 = pay_167 + hr + dr;

    cout << endl
         << "Display Detail: " << endl
         << endl;

    cout << "ID: " << id_167 << endl
         << "Name: " << name_167 << endl;
    cout << "Age: " << age_167 << endl
         << "Base Pay: " << pay_167 << endl;
    cout << "Gross: " << gross_167 << endl
         << endl;
}

int main()
{
    int n_167;
    cout << "Enter no of Employee: ";
    cin >> n_167;
    emp s[n_167];
    for (int i = 0; i < n_167; i++)
    {
        s[i].getdata();
    }
    for (int i = 0; i < n_167; i++)
    {
        s[i].display();
    }
    return 0;
}
