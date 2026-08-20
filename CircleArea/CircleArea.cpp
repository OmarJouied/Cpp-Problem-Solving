#include <iostream>
#include <cmath>

using namespace std;

double CircleArea(int CircleRay)
{
    const float PI = 3.14;

    return ceil(PI * pow(CircleRay, 2));
}

int main()
{
    int CircleRay;
    double Area;

    cout << "Enter the Circle Ray?\n";
    cin >> CircleRay;

     Area = CircleArea(CircleRay);

    cout << "\nCircle Area = " << Area << endl;

    return 0;
}
