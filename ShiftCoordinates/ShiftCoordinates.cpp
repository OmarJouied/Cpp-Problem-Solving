#include <iostream>
using namespace std;

void shiftCoordinates(int& x, int& y, int dx, int dy)
{
    x += dx;
    y += dy;
}

int main()
{
    int x = 5, y = 3, dx = 1, dy = 2;

    cout << "x = " << x << ", y = " << y << ", dx = " << dx << ", dy = " << dy << endl;

    shiftCoordinates(x, y, dx, dy);

    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
