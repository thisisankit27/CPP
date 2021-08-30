#include <iostream>
using namespace std;

class test
{
    int a;

public:
    test()
    {
        a = 0;
        cout << "1 ";
    }
    test(int x)
    {
        a = x;
        cout << "2 ";
    }
    test(const test &T)
    {
        a = T.a;
        cout << "3 ";
    }
    ~test() { cout << "4 "; }
    test add(test X)
    {
        test T;
        T.a = a + X.a;
        return T;
    }
};

int main()
{
    test t1(5), t2(10), t3;
    t3 = t1.add(t2);
    return 0;
}