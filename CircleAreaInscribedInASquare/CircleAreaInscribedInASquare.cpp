#include <iostream>
#include <cmath>

using namespace std;

double CircleAreaInscribedInASquare(int length)
{
    const float PI = 3.14;

    return ceil(PI * pow(length, 2) / 4);
}

int main()
{
    int length;
    double Area;

    cout << "Enter the length of Square ?\n";
    cin >> length;

    Area = CircleAreaInscribedInASquare(length);

    cout << "\nCircle Area = " << Area << endl;

    return 0;
}
