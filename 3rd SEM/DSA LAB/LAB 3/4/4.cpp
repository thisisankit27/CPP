#include <iostream>
using namespace std;
int main()
{

    int arr[10], even[10], odd[10], evncnt = 0, oddcnt = 0, i;
    cout << "Input numbers in the array";
    for (i = 0; i < 10; i++)
        cin >> arr[i];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            even[evncnt++] = arr[i];
        else
            odd[oddcnt++] = arr[i];
    }
    for (i = 0; i < evncnt; i++)
        cout << even[i] << " ";
    for (i = 0; i < oddcnt; i++)
        cout << odd[i] << " ";
    return 0;
}