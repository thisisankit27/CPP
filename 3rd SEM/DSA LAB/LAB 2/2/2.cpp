#include <iostream>

using namespace std;

int sum_rec(int a[], int n)
{
    if (n <= 0)
        return 0;
    return (sum_rec(a, n - 1) + a[n - 1]);
}

int main()
{
    int ar[5] = {1, 2, 3, 4, 5};
    cout << "Sum= " << sum_rec(ar, 5);
    return 0;
}