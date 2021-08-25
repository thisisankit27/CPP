#include <iostream>
using namespace std;

void input(int *ar, int n);
void display(int *ar, int n);
void add(int *ar, int *pr, int n, int m);
void sub(int *ar, int *pr, int n, int m);
void multiply(int *ar, int *pr, int n, int m);

int main()
{
    int n, m;
    cout << "Enter no. of terms in polynomial 1 & 2: ";
    cin >> n >> m;
    int *p = (int *)malloc(n * sizeof(int));
    int *q = (int *)malloc(m * sizeof(int));
    input(p, n);
    input(q, m);
    display(p, n);
    display(q, m);
    add(p, q, n, m);
    sub(p, q, n, m);
    multiply(p, q, n, m);
    delete p, q;
    return 0;
}

void input(int *ar, int n)
{
    cout << "Enter terms: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Coeff of x^" << i << " : ";
        cin >> ar[i];
    }
    cout << endl;
}

void display(int *ar, int n)
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

void add(int *ar, int *pr, int n, int m)
{
    int size = m > n ? m : n;
    int *sum = new int[size];
    for (int i = 0; i < size; i++)
        sum[i] = 0;
    for (int i = 0; i < n; i++)
    {
        sum[i] = ar[i];
    }
    for (int i = 0; i < m; i++)
    {
        sum[i] += pr[i];
    }
    cout << "After Addition: \n";
    display(sum, size);
    delete sum;
}

void sub(int *ar, int *pr, int n, int m)
{
    int size = m > n ? m : n;
    int *sum = new int[size];
    for (int i = 0; i < size; i++)
        sum[i] = 0;
    for (int i = 0; i < n; i++)
    {
        sum[i] = ar[i];
    }
    for (int i = 0; i < m; i++)
    {
        sum[i] -= pr[i];
    }
    cout << "After Subtraction: \n";
    display(sum, size);
    delete sum;
}

void multiply(int *ar, int *pr, int n, int m)
{
    int size = m + n - 1;
    int *mul = new int[size];
    for (int i = 0; i < size; i++)
        mul[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mul[i + j] += ar[i] * pr[j];
        }
    }
    cout << "After Multiplication: \n";
    display(mul, size);
    delete mul;
}