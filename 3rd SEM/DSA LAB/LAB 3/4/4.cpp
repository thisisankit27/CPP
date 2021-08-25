#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter No. of Elements: ";
    cin >> n;
    int *arr = (int *)malloc(n * sizeof(int));
    int *even = (int *)malloc(n * sizeof(int));
    int *odd = (int *)malloc(n * sizeof(int));
    int evncnt = 0, oddcnt = 0, i;
    cout << "Input numbers in the array: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even[evncnt++] = arr[i];
        else
            odd[oddcnt++] = arr[i];
    }
    int j = 0;
    for (j = 0, i = 0; i < evncnt; j++, i++)
        arr[j] = even[i];
    for (i = 0; i < oddcnt; j++, i++)
        arr[j] = odd[i];
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}