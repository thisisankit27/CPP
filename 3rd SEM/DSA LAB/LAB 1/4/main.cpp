#include <iostream>

using namespace std;

struct distance{
    int km;
    int m;
};

void add_distance(struct distance d1, struct distance d2);

int main()
{
    struct distance distance1, distance2;
    distance1.km=5;
    distance1.m=200;
    distance2.km=3;
    distance2.m=900;
    add_distance(distance1,distance2);
    return 0;
}

void add_distance(struct distance d1, struct distance d2){
    int extra_km=0, extra_m=0;;
    if((d1.m+d2.m)/1000>0){
        extra_km=(d1.m+d2.m)/1000;
        extra_m=extra_km*1000;
    }
    cout<<d1.km+d2.km+extra_km<<"km - "<<d1.m+d2.m-extra_m<<"m\n";
}
