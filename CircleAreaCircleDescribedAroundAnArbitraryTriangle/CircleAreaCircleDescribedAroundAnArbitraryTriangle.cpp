#include <iostream>
#include <cmath>

using namespace std;

double CircleAreaCircleDescribedAroundAnArbitraryTriangle(int A, int B, int C)
{
    const double PI = 3.14, P = (A + B + C) / 2;

    return PI * pow(A * B * C / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);
}

int main()
{
    int A, B, C;
    double P, Area;

    cout << "Please enter the value of A?\n";
    cin >> A;

    cout << "Please enter the value of B?\n";
    cin >> B;

    cout << "Please enter the value of C?\n";
    cin >> C;

    Area = CircleAreaCircleDescribedAroundAnArbitraryTriangle(A, B, C);

    cout << "Circle Area = " << Area << endl;

    return 0;
}
