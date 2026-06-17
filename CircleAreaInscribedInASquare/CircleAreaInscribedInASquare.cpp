#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float PI = 3.14;
    int length;
    double Area;

    cout << "Enter the length of Square ?\n";
    cin >> length;

    Area = ceil(PI * pow(length, 2) / 4);

    cout << "\nCircle Area = " << Area << endl;

    return 0;
}
