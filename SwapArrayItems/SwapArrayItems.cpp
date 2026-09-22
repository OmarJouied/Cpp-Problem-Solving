#include <iostream>
using namespace std;

int main()
{
    char Characters[4] = { 'A', 'B', 'C', 'D' };

    char temp = Characters[1];
    Characters[1] = Characters[3];
    Characters[3] = temp;

    cout << Characters[0] << endl;
    cout << Characters[1] << endl;
    cout << Characters[2] << endl;
    cout << Characters[3] << endl;

    return 0;
}
