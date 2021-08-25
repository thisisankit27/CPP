#include <iostream>
using namespace std;

class two;
class one
{
    int n1_167;

public:
    void getdata()
    {
        cout << "Enter Value: ";
        cin >> n1_167;
    }
    friend void greatest(one &ob1, two &ob2);
};

class two
{
    int n2_167;

public:
    void getdata()
    {
        cout << "Enter Value: ";
        cin >> n2_167;
    }
    friend void greatest(one &ob1, two &ob2);
};

void greatest(one &ob1, two &ob2)
{
    cout << "Greater amongst the two: ";
    ob1.n1_167 > ob2.n2_167 ? cout << ob1.n1_167 : cout << ob2.n2_167;
}

int main()
{
    one obj;
    two obj2;
    obj.getdata();
    obj2.getdata();
    greatest(obj, obj2);
    return 0;
}