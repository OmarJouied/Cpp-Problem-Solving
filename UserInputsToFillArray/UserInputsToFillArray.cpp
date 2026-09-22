#include <iostream>
using namespace std;

int main()
{
    double numbers[4];

    cout << "Please enter the number 1?\n";
    cin >> numbers[0];

    cout << "Please enter the number 2?\n";
    cin >> numbers[1];

    cout << "Please enter the number 3?\n";
    cin >> numbers[2];

    cout << "Please enter the number 4?\n";
    cin >> numbers[3];

    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl;
    cout << numbers[3] << endl;

    return 0;
}
