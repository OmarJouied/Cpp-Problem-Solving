#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float PI = 3.14;
    int CircleRay;
    double Area;

    cout << "Enter the Circle Ray?\n";
    cin >> CircleRay;

     Area = ceil(PI * pow(CircleRay, 2));

    cout << "\nCircle Area = " << Area << endl;

    return 0;
}
