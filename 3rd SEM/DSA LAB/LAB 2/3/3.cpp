#include <iostream>
#include <stdio.h>

using namespace std;

void swap_ptr(int &a, int &b, int &c)
{
    int temp = b;
    b = a;
    a = c;
    c = temp;
}

int main()
{
    int a = 10, b = 3, c = 7;
    printf("Before Swapping: \na = %d \nb = %d \nc = %d\n", a, b, c);
    swap_ptr(a, b, c);
    printf("After Swapping: \na = %d \nb = %d \nc = %d\n", a, b, c);
    return 0;
}