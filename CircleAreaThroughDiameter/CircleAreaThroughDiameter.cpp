#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    int Diameter;
    float Area;

    cout << "Enter the circle diameter ?\n";
    cin >> Diameter;

    Area = PI * Diameter * Diameter / 4;

    cout << "\nCircle Area = " << Area << endl;

    return 0;
}
