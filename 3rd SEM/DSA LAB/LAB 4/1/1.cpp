#include <iostream>
using namespace std;
int m, n;
int *ar = (int *)malloc(m * n * sizeof(int));

void nonZero();
void sumAbove();
void dispBelowMinor();
void productDiagonal();
void transpose();

int main()
{
    cout << "Enter no. of Row and Col: ";
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> *(ar + i * n + j);
        }
    }
    nonZero();
    sumAbove();
    dispBelowMinor();
    productDiagonal();
    transpose();
    return 0;
}

void nonZero()
{
    cout << "Non-Zero elements at index: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(ar + i * n + j) != 0)
                cout << "(" << i << "," << j << ") , ";
        }
    }
    cout << endl;
}

void sumAbove()
{
    int d1;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j > i)
                d1 += *(ar + i * n + j);
        }
    }
    cout << "Sum of elements above Leading diagonal: " << d1 << endl;
}

void dispBelowMinor()
{
    int d1;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j < i)
                d1 += *(ar + i * n + j);
        }
    }
    cout << "Sum of elements below Leading diagonal: " << d1 << endl;
}

void productDiagonal()
{
    long product_major = 1, product_minor = 1;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                product_major = product_major * *(ar + i * n + j);
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i + j == (m - 1))
                product_minor = product_minor * *(ar + i * n + j);
        }
    }
    cout << "Product of major: " << product_major << endl;
    cout << "Product of minor: " << product_minor << endl;
}

void transpose()
{
    int *transpose = (int *)malloc(m * n * sizeof(int));
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
        {
            *(transpose + j * n + i) = *(ar + i * n + j);
        }

    cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            cout << " " << *(transpose + i * n + j);
            if (j == m - 1)
                cout << endl
                     << endl;
        }
}