#include <iostream>
#include <cmath>

using namespace std;

double CircleAreaThroughDiameter(int Diameter)
{
    const float PI = 3.14;

    return ceil(PI * pow(Diameter, 2) / 4);
}

int main()
{
    int Diameter;
    float Area;

    cout << "Enter the circle diameter ?\n";
    cin >> Diameter;

    Area = CircleAreaThroughDiameter(Diameter);

    cout << "\nCircle Area = " << Area << endl;

    return 0;
}
