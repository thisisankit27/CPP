#include <iostream>
using namespace std;

class fun
{
    int n;
    static int count_get;
    static int count_disp;

public:
    void getdata()
    {
        ++count_get;
        cout << "Enter data: ";
        cin >> n;
    }
    void display()
    {
        ++count_disp;
        cout << "Data Stored: " << n << endl;
    }
    static void countDisp()
    {
        cout << "Get Called: " << count_get << " times.\n";
        cout << "Display Called: " << count_disp << " times.\n";
    }
};

int fun::count_get;
int fun::count_disp;

int main()
{
    fun obj;
    int flag = 1;
    while (flag > 0)
    {
        cout << "1. Enter Data\n";
        cout << "2. Display Data\n";
        cout << "0. Exit\n";
        cin >> flag;
        switch (flag)
        {
        case 1:
            obj.getdata();
            break;
        case 2:
            obj.display();
            break;
        case 0:
            flag = 0;
            fun::countDisp();
            break;
        default:
            cout << "Not a valid entry!\n";
            break;
        }
    }
    return 0;
}