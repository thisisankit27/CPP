#include <iostream>
using namespace std;

struct emp
{
    char id_167[50];
    char name_167[50];
    int age_167;
    long int pay_167;
    long int gross_167;
};

int main()
{
    int n_167;
    cout << "Enter no. of Employee: ";
    cin >> n_167;
    struct emp s[n_167];
    for (int i = 0; i < n_167; i++)
    {
        cin.ignore();
        cout << "ID: ";
        gets(s[i].id_167);
        cout << "Name: ";
        gets(s[i].name_167);
        cout << "Age: ";
        cin >> s[i].age_167;
        cout << "Pay: ";
        cin >> s[i].pay_167;
    }
    for (int i = 0; i < n_167; i++)
    {
        int hr = (s[i].pay_167) * 0.8;
        int dr = (s[i].pay_167) * 0.1;
        s[i].gross_167 = s[i].pay_167 + hr + dr;
    }
    cout << endl
         << "Display Details: " << endl
         << endl;
    for (int i = 0; i < n_167; i++)
    {
        cout << "ID: " << s[i].id_167 << endl
             << "Name: " << s[i].name_167 << endl;
        cout << "Age: " << s[i].age_167 << endl
             << "Base Pay: " << s[i].pay_167 << endl;
        cout << "Gross: " << s[i].gross_167 << endl
             << endl;
    }
    return 0;
}
