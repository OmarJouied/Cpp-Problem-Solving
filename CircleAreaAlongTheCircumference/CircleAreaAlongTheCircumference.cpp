#include <iostream>
#include <cmath>

using namespace std;

double CircleAreaAlongTheCircumference(int Circumference)
{
    const float PI = 3.14;
    
    return pow(Circumference, 2) / (4 * PI);
}

int main()
{
    int Circumference;
    double Area;

    cout << "Enter the Circumference?\n";
    cin >> Circumference;

    Area = CircleAreaAlongTheCircumference(Circumference);

    cout << "Circle Area = " << Area << endl;

    return 0;
}

