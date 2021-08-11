#include <iostream>

using namespace std;

class two;
class one
{
    int num1;

public:
    void getdata(int a)
    {
        num1 = a;
    }
    void show()
    {
        cout << "\n Value of Number 1 : " << num1;
    }
    friend void swap(one *num1, two *num2);
};
class two
{
    int num2;

public:
    void getdata(int a)
    {
        num2 = a;
    }
    void show()
    {
        cout << "\n Value of Number 2 : " << num2;
    }
    friend void swap(one *num1, two *num2);
};
void swap(one *no1, two *no2)
{
    int no3;
    no3 = no1->num1;
    no1->num1 = no2->num2;
    no2->num2 = no3;
}
int main()
{
    one b;
    int n;
    cout << "Enter Value 1: ";
    cin >> n;
    b.getdata(n);
    two d;
    cout << "Enter Value 2: ";
    cin >> n;
    d.getdata(n);
    swap(&b, &d);
    b.show();
    d.show();
    return 0;
}