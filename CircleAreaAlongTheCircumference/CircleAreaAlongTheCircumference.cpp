#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    int Circumference;

    cout << "Enter the Circumference?\n";
    cin >> Circumference;

    cout << "Circle Area = " << Circumference * Circumference / (4 * PI) << endl;

    return 0;
}
