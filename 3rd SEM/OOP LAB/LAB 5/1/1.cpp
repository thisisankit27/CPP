#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;
    int *p;

public:
    //complex(){} dummy constructor

    complex() //default constructor + dynamic
    {
        real = 10;
        img = 10;
        p = new int;
        *p = 10;
    }
    complex(int x, int y = 20, int z = 20) //para-constructor
    {
        real = x;
        img = y;
        p = new int;
        *p = z;
    }
    complex(complex &x) //copy-constructor
    {
        real = x.real;
        img = x.img;
        p = new int; //avoiding deep-copy constructor
        *p = 0;
    }
    ~complex() //destructor
    {
        cout << "Destructor Invoked" << endl;
    }
    void display()
    {
        cout << real << " + i" << img << " -> " << *p << endl;
    }
};

int main()
{
    complex c1; //default constructor + dynamic constructor
    c1.display();
    complex c2(30); //parameterized constructor +dynamic + default value
    c2.display();
    complex c3(c1);
    c3.display();
    return 0;
}