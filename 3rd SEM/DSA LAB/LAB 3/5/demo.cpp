#include <iostream>
using namespace std;

int *ar = NULL;
int n = 0;

void createArray();
void displayArray();

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int flag;
    cout << "To start enter 1." << endl;
    cin >> flag;
    while (flag)
    {
        cout << "1. Create an array" << endl;
        cout << "2. Display the array" << endl;
        cout << "3. Insert an element at a given position" << endl;
        cout << "4. Delete an element from a given position" << endl;
        cout << "5. Search an elemment" << endl;
        cout << "6. Display the largest and smallest elements " << endl;
        cout << "7. Sort the array" << endl;
        cout << "Press 0 to exit";
        cin >> flag;
        switch (flag)
        {
        case 0:
            break;
        case 1:
            createArray();
            continue;
        case 2:
            displayArray();
            continue;
        }
    }
    system("pause");
    return 0;
}

void createArray()
{
    cout << "Enter Size of array: ";
    cin >> n;
    ar = (int *)malloc(n * sizeof(int));
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
}

void displayArray()
{
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}