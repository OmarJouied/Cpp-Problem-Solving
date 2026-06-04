#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    int CircleRay;

    cout << "Enter the Circle Ray?\n";
    cin >> CircleRay;

    cout << "\nCircle Area = " << PI * CircleRay * CircleRay << endl;

    return 0;
}
