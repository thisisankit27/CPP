#include <iostream>
using namespace std;

int findGCD(int n1, int n2)
{
    int gcd;
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    return gcd;
}

class fraction
{
    int num;
    int den;

public:
    fraction()
    {
        cout << "Enter the numerator: ";
        cin >> num;
        cout << "Enter the denominator: ";
        cin >> den;
    }
    void addition(fraction *p)
    {
        int lcm = (p->den * den) / findGCD(p->den, den);
        int sum = (p->num * lcm / p->den) + (num * lcm / den);
        int num3 = sum / findGCD(sum, lcm);
        lcm = lcm / findGCD(sum, lcm);
        cout << "Result of Addition = " << num3 << "/" << lcm << endl;
    }
    void substraction(fraction *p)
    {
        int lcm = (p->den * den) / findGCD(p->den, den);
        int sum = (p->num * lcm / p->den) - (num * lcm / den);
        int num3 = sum / findGCD(sum, lcm);
        lcm = lcm / findGCD(sum, lcm);
        cout << "Result of Substraction = " << num3 << "/" << lcm << endl;
    }
    void multiplication(fraction *p)
    {
        int numerator = num * p->num;
        int denominator = den * p->den;
        for (int i = denominator * numerator; i > 1; i--)
        {
            if ((denominator % i == 0) && (numerator % i == 0))
            {
                denominator /= i;
                numerator /= i;
            }
        }
        cout << "Result of Multiplication = " << numerator << "/" << denominator << endl;
    }
};

int main()
{
    cout << "For Fraction-1:\n";
    fraction f1;
    cout << "For Fraction-2:\n";
    fraction f2;
    f2.addition(&f1);
    f2.substraction(&f1);
    f2.multiplication(&f1);
    return 0;
}