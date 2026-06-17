#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Days, Hours, Minutes, Seconds;
    const int SecondsPerMinute = 60, SecondsPerHour = pow(SecondsPerMinute, 2), SecondsPerDay = SecondsPerHour * 24;

    cout << "Enter Days?\n";
    cin >> Days;

    cout << "Enter Hours?\n";
    cin >> Hours;

    cout << "Enter Minutes?\n";
    cin >> Minutes;

    cout << "Enter Seconds?\n";
    cin >> Seconds;

    cout << endl << Days * SecondsPerDay + Hours * SecondsPerHour + Minutes * SecondsPerMinute + Seconds << " Seconds" << endl;

    return 0;
}
