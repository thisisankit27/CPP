#include <iostream>
using namespace std;

int *ar = NULL;
int n = 0;

void createArray();
void displayArray();
void insertElement();
void deleteElement();
void searchElement();
void largeSmall();
void sortArray();

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int flag;
    cout << "To start enter 1. " << endl;
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
        cout << "Press 0 to exit" << endl;
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
        case 3:
            insertElement();
            continue;
        case 4:
            deleteElement();
            continue;
        case 5:
            searchElement();
            continue;
        case 6:
            largeSmall();
        case 7:
            sortArray();
        }
    }
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

void insertElement()
{
    ar = (int *)realloc(ar, sizeof(int) * (n + 1));
    int pos, val;
    cout << "Enter position to enter: ";
    cin >> pos;
    cout << "Enter Value: ";
    cin >> val;
    for (int i = n - 1; i >= pos - 1; i--)
        ar[i + 1] = ar[i];

    ar[pos - 1] = val;
}

void deleteElement()
{
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;
    if (pos >= n + 1)
        printf("Deletion not possible.\n");
    else
    {
        for (int i = pos - 1; i < n - 1; i++)
            ar[i] = ar[i + 1];
    }
}

void searchElement()
{
    int flag = 0;
    int x;
    cout << "Enter Element: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            cout << "Found at pos: " << i << endl;
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element not found." << endl;
    }
}

void largeSmall()
{
    int max = ar[0], i;
    for (i = 0; i < n; i++)
    {
        if (max < ar[i])
            max = ar[i];
    }
    int min = ar[0];
    for (i = 0; i < n; i++)
    {
        if (min > ar[i])
            min = ar[i];
    }
    cout << "Largest element : " << max << endl;
    cout << "Smallest element : " << min << endl;
}

void sortArray()
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
                swap(&ar[j], &ar[j + 1]);
        }
    }
}