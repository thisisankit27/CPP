#include <iostream>

using namespace std;

class complex
{
    int real;
    int img;

public:
    void getdata()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter Imaginnary part: ";
        cin >> img;
    }
    void display()
    {
        cout << real << " +i" << img << endl;
    }
    void ADD(int a, complex s)
    {
        real = s.real + a;
        img = s.img;
    }
    void ADD(complex s1, complex s2)
    {
        real = s1.real + s2.real;
        img = s1.img + s2.img;
    }
};

int main()
{
    complex a_167, b_167, c_167;
    a_167.getdata();
    int r_167;
    cout << "Enter a real no: ";
    cin >> r_167;
    b_167.ADD(r_167, a_167);
    c_167.ADD(a_167, b_167);
    b_167.display();
    c_167.display();
    return 0;
}