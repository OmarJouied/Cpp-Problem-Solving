#include <iostream>
using namespace std;

enum enYearMonth { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

void ShowYearMonthMenu()
{
    cout << "*********************" << endl;
    cout << "*    Year Months    *" << endl;
    cout << "*********************" << endl;
    cout << "1:  January" << endl;
    cout << "2:  February" << endl;
    cout << "3:  March" << endl;
    cout << "4:  April" << endl;
    cout << "5:  May" << endl;
    cout << "6:  June" << endl;
    cout << "7:  July" << endl;
    cout << "8:  August" << endl;
    cout << "9:  September" << endl;
    cout << "10: October" << endl;
    cout << "11: November" << endl;
    cout << "12: December" << endl;
    cout << "*********************" << endl;
    cout << "Please enter the number of month?" << endl;
}

enYearMonth ReadYearMonth()
{
    int YearMonth;
    cin >> YearMonth;
    return (enYearMonth)YearMonth;
}

string GetYearMonthName(enYearMonth YearMonth)
{
    switch (YearMonth)
    {
    case enYearMonth::January:
        return "January";
    case enYearMonth::February:
        return "February";
    case enYearMonth::March:
        return "March";
    case enYearMonth::April:
        return "April";
    case enYearMonth::May:
        return "May";
    case enYearMonth::June:
        return "June";
    case enYearMonth::July:
        return "July";
    case enYearMonth::August:
        return "August";
    case enYearMonth::September:
        return "September";
    case enYearMonth::October:
        return "October";
    case enYearMonth::November:
        return "November";
    case enYearMonth::December:
        return "December";
    default:
        return "Wrong Month";
    }
}

int main()
{
    ShowYearMonthMenu();

    string MonthName = GetYearMonthName(ReadYearMonth());

    cout << "Its " << MonthName << endl;

    return 0;
}
