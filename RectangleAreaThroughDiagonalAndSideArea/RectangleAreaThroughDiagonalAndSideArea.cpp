#include <iostream>
#include <cmath>

using namespace std;

double calculateRectangleAreaThroughDiagonalAndSideArea(double width, double diagonal)
{
    return width * sqrt(pow(diagonal, 2) - pow(width, 2));
}

int main()
{
    double width, diagonal, area;

    cout << "Please enter the width?\n";
    cin >> width;

    cout << "Please enter the diagonal?\n";
    cin >> diagonal;

    area = calculateRectangleAreaThroughDiagonalAndSideArea(width, diagonal);

    cout << "Rectangle Area = " << area << endl;

    return 0;
}
