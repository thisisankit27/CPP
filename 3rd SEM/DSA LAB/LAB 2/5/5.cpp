#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Enter no. of elements: ";
    cin >> n;
    int *p = (int *)malloc(n * sizeof(int));
    if (!p)
    {
        cout << "Insufficient Memory!\n";
        return 0;
    }
    else
    {
        cout << "\nEnter Value of Array: ";
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
        }

        cout << "\nElements in array are: ";
        for (int i = 0; i < n; ++i)
        {
            cout << p[i] << " ";
        }
    }

    return 0;
}