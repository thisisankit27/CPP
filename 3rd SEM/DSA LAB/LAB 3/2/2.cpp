#include <iostream>
using namespace std;

void greatest(int &a, int &b)
{
    if (a > b)
    {
        a += b;
        b = a - b;
        a -= b;
    }
}

int main()
{
    int n;
    cout << "Enter No. Of elements: ";
    cin >> n;
    int *a = (int *)malloc(n * sizeof(int)); //DMA
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m1, m2;
    cout << "Enter two elements: ";
    cin >> m1 >> m2;
    int flag1, flag2;
    for (int i = 0; i < n; i++) //search of index
    {
        if (a[i] == m1)
        {
            flag1 = i;
        }
        if (a[i] == m2)
        {
            flag2 = i;
        }
    }
    greatest(flag1, flag2);
    int count = 0;
    for (int i = flag1; i <= flag2; i++)
    {
        cout << a[i] << " ";
        count++;
    }
    cout << "\nNo of Elements = " << count;
    return 0;
}