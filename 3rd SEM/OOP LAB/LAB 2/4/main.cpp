//4. Complex no. input 10 complex num, and print them

#include <iostream>

using namespace std;

class complex_167
{
    int real_167;
    int img_167;

public:
    void setdata();
    void display();
};

void complex_167::setdata()
{
    cout << "Enter Real Part: ";
    cin >> real_167;
    cout << "Enter Imaginary Part: ";
    cin >> img_167;
}

void complex_167::display()
{
    cout << real_167 << " + i" << img_167 << endl;
}

int main()
{
    complex_167 r[3];
    for (int i = 0; i < 3; i++)
    {
        r[i].setdata();
    }
    for (int i = 0; i < 3; i++)
    {
        r[i].display();
    }
    return 0;
}
