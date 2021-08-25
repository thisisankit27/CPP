#include <iostream>
#include <string>
using namespace std;

class book
{
    char name_167[20];
    char author_167[20];
    int price_167;

public:
    void input_data()
    {
        cin.ignore();
        cout << "Enter name: ";
        cin.getline(name_167, 20);
        cout << "Enter Author: ";
        cin.getline(author_167, 20);
        cout << "Enter Price: ";
        cin >> price_167;
    }
    friend void display(book *p, int min, int max);
};

void display(book *p, int min, int max)
{
    cout << "Book in the given range: \n";
    if (p->price_167 >= min && p->price_167 <= max)
    {
        cout << "\nName: " << p->name_167 << endl;
        cout << "Author: " << p->author_167 << endl;
        cout << "Price: " << p->price_167 << endl;
    }
}

int main()
{
    int n;
    cout << "Enter no. of book: ";
    cin >> n;
    book obj[n];
    for (int i = 0; i < n; i++)
    {
        obj[i].input_data();
    }
    int min, max;
    cout << "Enter Min & Max Range: ";
    cin >> min >> max;
    for (int i = 0; i < n; i++)
    {
        display(&obj[i], min, max);
    }
}
