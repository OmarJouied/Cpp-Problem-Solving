#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double width, diagonal, area;

    cout << "Please enter the width?\n";
    cin >> width;

    cout << "Please enter the diagonal?\n";
    cin >> diagonal;

    area = width * sqrt(pow(diagonal, 2) - pow(width, 2));

    cout << "Rectangle Area = " << area << endl;

    return 0;
}
