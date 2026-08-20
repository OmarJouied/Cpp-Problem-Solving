#include <iostream>
#include <cmath>

using namespace std;

int CalculateTaskDurationInSeconds(int Days, int Hours, int Minutes, int Seconds)
{
    const int SecondsPerMinute = 60, SecondsPerHour = pow(SecondsPerMinute, 2), SecondsPerDay = SecondsPerHour * 24;
    
    return Days * SecondsPerDay + Hours * SecondsPerHour + Minutes * SecondsPerMinute + Seconds;
}

int main()
{
    int Days, Hours, Minutes, Seconds;

    cout << "Enter Days?\n";
    cin >> Days;

    cout << "Enter Hours?\n";
    cin >> Hours;

    cout << "Enter Minutes?\n";
    cin >> Minutes;

    cout << "Enter Seconds?\n";
    cin >> Seconds;

    cout << endl << CalculateTaskDurationInSeconds(Days, Hours, Minutes, Seconds) << " Seconds" << endl;
    
    return 0;
}
