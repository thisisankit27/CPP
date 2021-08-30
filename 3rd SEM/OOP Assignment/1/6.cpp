#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class bill
{
    int serial;
    string code;
    string name;
    int price;
    int quantity;
    int total;
    static int netTotal;

public:
    void getProduct()
    {
        cin.ignore();
        cout << "Enter Product Code: ";
        getline(cin, code);
        cout << "Enter Pruduct Name: ";
        getline(cin, name);
        cout << "Enter Price: ";
        cin >> price;
    }
    void getQuantity(int n)
    {
        serial = n;
        cout << serial << setw(15) << code << setw(20) << name << setw(25) << price << "\t\t";
        cin >> quantity;
    }
    void displayBill()
    {
        total = quantity * price;
        netTotal += total;
        cout << serial << setw(15) << code << setw(20) << name << setw(25) << price << setw(18) << quantity << setw(15) << total << endl;
    }
    friend void displaytotal();
};

int bill::netTotal = 0;

void displaytotal()
{
    cout << setw(102) << "Total = Rs." << bill::netTotal << "/-" << endl;
}

int main()
{
    int n;
    cout << "Enter No. of items: ";
    cin >> n;
    bill *p = new bill[n];
    for (int i = 0; i < n; ++i)
    {
        p[i].getProduct();
    }
    cout << "SI.No." << setw(10) << "Code" << setw(20) << "Name" << setw(25) << "Price" << setw(18) << "Quantity" << endl;
    for (int i = 0; i < n; ++i)
    {
        p[i].getQuantity(i);
    }
    cout << endl
         << endl;
    cout << "SI.No." << setw(10) << "Code" << setw(20) << "Name" << setw(25) << "Price" << setw(18) << "Quantity" << setw(15) << "Total" << endl;
    cout << "---------------------------------------------------------------------------------------------------\n";
    for (int i = 0; i < n; ++i)
    {
        p[i].displayBill();
    }
    cout << "---------------------------------------------------------------------------------------------------\n";
    displaytotal();
    return 0;
}