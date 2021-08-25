#include <iostream>

using namespace std;

class two;
class one
{
    int num1_167;

public:
    void getdata(int a)
    {
        num1_167 = a;
    }
    void show()
    {
        cout << "\n Value of Number 1 : " << num1_167;
    }
    friend void swap(one *no1, two *no2);
};
class two
{
    int num2_167;

public:
    void getdata(int a)
    {
        num2_167 = a;
    }
    void show()
    {
        cout << "\n Value of Number 2 : " << num2_167;
    }
    friend void swap(one *no1, two *no2);
};
void swap(one *no1, two *no2)
{
    int no3;
    no3 = no1->num1_167;
    no1->num1_167 = no2->num2_167;
    no2->num2_167 = no3;
}
int main()
{
    one b;
    int n_167;
    cout << "Enter Value 1: ";
    cin >> n_167;
    b.getdata(n_167);
    two d;
    cout << "Enter Value 2: ";
    cin >> n_167;
    d.getdata(n_167);
    swap(&b, &d);
    b.show();
    d.show();
    return 0;
}