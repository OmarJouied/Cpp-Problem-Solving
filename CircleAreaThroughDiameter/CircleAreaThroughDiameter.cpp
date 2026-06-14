#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float PI = 3.14;
    int Diameter;
    float Area;

    cout << "Enter the circle diameter ?\n";
    cin >> Diameter;

    Area = ceil(PI * pow(Diameter, 2) / 4);

    cout << "\nCircle Area = " << Area << endl;

    return 0;
}
