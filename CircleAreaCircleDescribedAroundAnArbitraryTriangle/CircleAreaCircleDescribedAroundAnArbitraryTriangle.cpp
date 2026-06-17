#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A, B, C;
    const double PI = 3.14;
    double P, Area;

    cout << "Please enter the value of A?\n";
    cin >> A;

    cout << "Please enter the value of B?\n";
    cin >> B;

    cout << "Please enter the value of C?\n";
    cin >> C;

    P = (A + B + C) / 2;
    Area = round(PI * pow(A * B * C / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2));

    cout << "Circle Area = " << Area << endl;

    return 0;
}
