#include <iostream>

using namespace std;

int gcd_itt(int n1, int n2)
{
    int hcf;
    if (n2 > n1)
    {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (int i = 1; i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int gcd_rec(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd_rec(a - b, b);

    return gcd_rec(a, b - a);
}

int main()
{
    int a = 5, b = 6;
    cout << "GCD using Itteration = " << gcd_itt(a, b) << endl;
    cout << "GCD using Recurssion = " << gcd_rec(a, b) << endl;
    return 0;
}