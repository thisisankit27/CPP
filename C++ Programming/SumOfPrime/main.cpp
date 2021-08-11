#include <iostream>
#include <stdlib.h>

using namespace std;

bool isPrime(int n);

int main()
{
    int n;
    cout << "Enter a positive Number: ";
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        int flag = 0;
        if (isPrime(i))
            flag++;
        if (isPrime(n - i))
            flag++;
        if (flag == 2)
        {
            cout << i << " + " << n - i << endl;
        }
    }
    system("PAUSE");
    return 0;
}

bool isPrime(int n)
{
    if (n == 1)
    {
        return true;
    }
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
            flag++;
        }
    }
    if (flag == 0)
    {
        return true;
    }
    return 0;
}