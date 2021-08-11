#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<sizeof(a)<<endl;

    float b;
    cout<<sizeof(b)<<endl;

    char c;
    cout<<sizeof(c)<<endl;

    bool d;
    cout<<sizeof(d)<<endl;

    short int e;
    cout<<sizeof(e)<<endl;

    long int f;             //Will not print 8 in Windows
    cout<<sizeof(f)<<endl;

    long long int g;       // this is needed for Windows
    cout<<sizeof(g)<<endl;
    return 0;
}