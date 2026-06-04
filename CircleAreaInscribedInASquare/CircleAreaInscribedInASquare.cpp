#include <iostream>
using namespace std;

int main()
{
    const float PI = 3.14;
    int length;

    cout << "Enter the length of Square ?\n";
    cin >> length;

    cout << "\nCircle Area = " << PI * length * length / 4 << endl;

    return 0;
}
