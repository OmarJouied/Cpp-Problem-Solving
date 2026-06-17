#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float PI = 3.14;
    int Circumference;
    double Area;

    cout << "Enter the Circumference?\n";
    cin >> Circumference;

    Area = floor(pow(Circumference, 2) / (4 * PI));

    cout << "Circle Area = " << Area << endl;

    return 0;
}

