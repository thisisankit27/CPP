//5. feet-inch

#include <iostream>

using namespace std;

class distanceft
{
    int feet_167;
    int inch_167;

public:
    void add(distanceft d1, distanceft d2)
    {
        feet_167 = d1.feet_167 + d2.feet_167;
        inch_167 = d1.inch_167 + d2.inch_167;
    }
    distanceft return_add(distanceft d)
    {
        distanceft r;
        r.feet_167 = feet_167 + d.feet_167;
        r.inch_167 = inch_167 + d.inch_167;
        return r;
    }
    void getinput();
    void display();
};

void distanceft::getinput()
{
    cout << "Enter feet: ";
    cin >> feet_167;
    cout << "Enter inch: ";
    cin >> inch_167;
}

void distanceft::display()
{
    if (inch_167 / 12 >= 1)
    {
        feet_167 += inch_167 / 12;
        inch_167 -= 12 * (inch_167 / 12);
    }
    cout << feet_167 << "ft " << inch_167 << "inch\n";
}

int main()
{
    distanceft x;
    distanceft y;
    x.getinput();
    y.getinput();

    //Part (a)
    distanceft z;
    z.add(x, y);
    cout << endl
         << "Part a:" << endl;
    z.display();

    //Part (b)
    distanceft q;
    q = x.return_add(y);
    cout << endl
         << "Part b:" << endl;
    q.display();
    return 0;
}
