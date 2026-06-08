#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float PI = 3.14;
    int CircleRay;

    cout << "Enter the Circle Ray?\n";
    cin >> CircleRay;

    cout << "\nCircle Area = " << PI * pow(CircleRay, 2) << endl;

    return 0;
}
