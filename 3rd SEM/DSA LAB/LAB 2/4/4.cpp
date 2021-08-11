#include <iostream>

using namespace std;

int main()
{
    int ar[5] = {1, 2, 3, 4, 5};
    int *p = NULL;
    p = ar;
    for (int i = 4; i >= 0; i--)
    {
        cout << *(p + i) << " ";
    }
    return 0;
}