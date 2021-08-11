//8. bank account deposit,withdraw,bal enquiry.

#include <iostream>

using namespace std;

class account
{
    char name_167[50];
    int acc_no_167;
    char acc_type_167[20];
    int balance_167;

public:
    void setvalue();
    void deposit();
    void withdraw();
    void display();
};

void account::setvalue()
{
    cout << "Enter Name: ";
    cin.getline(name_167, 50);
    cout << "Enter Account Number: ";
    cin >> acc_no_167;
    cin.ignore();
    cout << "Enter Acc. Type: ";
    cin.getline(acc_type_167, 20);
}
void account::deposit()
{
    cout << "Enter Balance: ";
    cin >> balance_167;
}

void account::withdraw()
{
    int x;
    cout << "Enter Amount to Widthraw: ";
    cin >> x;
    balance_167 -= x;
}

void account::display()
{
    cout << "Name: " << name_167 << endl;
    cout << "BAlance: " << balance_167 << endl;
}

int main()
{
    account a;
    a.setvalue();
    a.deposit();
    a.withdraw();
    a.display();
    return 0;
}
