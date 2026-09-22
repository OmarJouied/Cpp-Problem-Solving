#include <iostream>
using namespace std;

int main()
{
    short Numbers[3] = { 5, 4, 3 };

    Numbers[0] *= 2;
    Numbers[1] *= 2;
    Numbers[2] *= 2;

    cout << Numbers[0] << endl;
    cout << Numbers[1] << endl;
    cout << Numbers[2] << endl;

    return 0;
}
