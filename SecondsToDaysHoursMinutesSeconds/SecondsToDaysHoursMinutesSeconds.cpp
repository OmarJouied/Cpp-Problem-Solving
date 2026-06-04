#include <iostream>
using namespace std;

int main()
{
    int Seconds, Minutes, Hours, Days, Remainder;

    cout << "Enter the number of seconds?\n";
    cin >> Seconds;

    Days = Seconds / 24 / 3600;
    Remainder = Seconds % (24 * 3600);

    Hours = Remainder / 3600;
    Remainder = Remainder % 3600;

    Minutes = Remainder / 60;

    Seconds = Remainder % 60;

    cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;

    return 0;
}
