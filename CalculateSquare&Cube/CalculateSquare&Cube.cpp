#include <iostream>
#include <cmath>

using namespace std;

void calculateSquareAndCube(int Number, int &Square, int &Cube)
{
    Square = pow(Number, 2);
    Cube = pow(Number, 3);
}

int main()
{
    int Num = 20, Square, Cube;

    calculateSquareAndCube(Num, Square, Cube);

    cout << "Number = " << Num << endl;
    cout << "Square = " << Square << endl;
    cout << "Cube = " << Cube << endl;

    return 0;
}
