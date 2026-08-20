#include <iostream>
using namespace std;

void SecondsToDaysHoursMinutesSeconds(int Seconds)
{
    int Minutes, Hours, Days, Remainder;

    Days = Seconds / 24 / 3600;
    Remainder = Seconds % (24 * 3600);

    Hours = Remainder / 3600;
    Remainder = Remainder % 3600;

    Minutes = Remainder / 60;

    Seconds = Remainder % 60;

    cout << Days << ":" << Hours << ":" << Minutes << ":" << Seconds << endl;
}

int main()
{
    int Seconds;

    cout << "Enter the number of seconds?\n";
    cin >> Seconds;

    SecondsToDaysHoursMinutesSeconds(Seconds);

    return 0;
}
