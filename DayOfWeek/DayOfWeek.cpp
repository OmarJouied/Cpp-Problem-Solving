#include <iostream>
using namespace std;

enum enWeekDay { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

void ShowWeekDayMenu()
{
    cout << "*************************" << endl;
    cout << "*       Week Days       *" << endl;
    cout << "*************************" << endl;
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thursday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "*************************" << endl;
}

enWeekDay ReadWeekDay()
{
    int WD;
    cin >> WD;
    return (enWeekDay)WD;
}

string GetWeekDayName(enWeekDay WeekDay)
{
    switch (WeekDay) {
    case 1:
        return "Sunday";
    case 2:
        return "Monday";
    case 3:
        return "Tuesday";
    case 4:
        return "Wednesday";
    case 5:
        return "Thursday";
    case 6:
        return "Friday";
    case 7:
        return "Saturday";
    default:
        return "Wrong Day";
    }
}

int main()
{
    ShowWeekDayMenu();

    string Day = GetWeekDayName(ReadWeekDay());

    cout << "Its " << Day << endl;
    
    return 0;
}
