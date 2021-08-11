//7. Distance btw oordinates

#include <iostream>
#include <math.h>

using namespace std;

class dist
{
    int x_167;
    int y_167;

public:
    double dist_formu(dist g);
    void get();
};

void dist::get()
{
    cout << "x: ";
    cin >> x_167;
    cout << "y: ";
    cin >> y_167;
}

double dist::dist_formu(dist g)
{
    double gap_167;
    gap_167 = sqrt((x_167 - g.x_167) * (x_167 - g.x_167) + (y_167 - g.y_167) * (y_167 - g.y_167));
    cout << "Distance btw the coordinates: ";
    return gap_167;
}

int main()
{
    dist x, y;
    x.get();
    y.get();
    cout << x.dist_formu(y);
    return 0;
}
