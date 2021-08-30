#include <iostream>
using namespace std;

class operation
{
    int *array1 = NULL;
    int *array2 = NULL;
    int n;
    int m;
    void getdata(int x, int *p);
    void display(int *ar, int n);

public:
    operation()
    {
        cout << "Enter Number Of Terms in Polynomial 1: ";
        cin >> n;
        cout << "Enter Number Of Terms in Polynomial 2: ";
        cin >> m;
        array1 = new int[n];
        array2 = new int[m];
        getdata(n, array1);
        getdata(m, array2);
    }
    void addition();
    void multiply();
};

void operation::getdata(int x, int *p)
{
    cout << "Enter Coeff of: \n";
    for (int i = 0; i < x; ++i)
    {
        cout << "x^" << i << ": ";
        cin >> p[i];
    }
}

void operation::display(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << "x^" << i;
        if (i != n - 1)
        {
            cout << " + ";
        }
    }
    cout << endl
         << endl;
}

void operation::addition()
{
    int size = m > n ? m : n;
    int *sum = new int[size];
    for (int i = 0; i < size; i++)
        sum[i] = 0;
    for (int i = 0; i < n; i++)
    {
        sum[i] = array1[i];
    }
    for (int i = 0; i < m; i++)
    {
        sum[i] += array2[i];
    }
    cout << "After Addition: \n";
    display(sum, size);
    delete sum;
}

void operation::multiply()
{
    int size = m + n - 1;
    int *mul = new int[size];
    for (int i = 0; i < size; i++)
        mul[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mul[i + j] += array1[i] * array2[j];
        }
    }
    cout << "After Multiplication: \n";
    display(mul, size);
    delete mul;
}
int main()
{
    operation obj;
    obj.addition();
    obj.multiply();
    return 0;
}