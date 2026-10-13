#include <iostream>
using namespace std;

int main()
{
    short Month;

    cout << "Please enter the number of month?\n";
    cin >> Month;

    if (Month < 1 || Month > 12)
    {
        cout << "Wrong Month" << endl;
    }
    else if (Month == 1)
    {
        cout << "January" << endl;
    }
    else if (Month == 2)
    {
        cout << "February" << endl;
    }
    else if (Month == 3)
    {
        cout << "March" << endl;
    }
    else if (Month == 4)
    {
        cout << "April" << endl;
    }
    else if (Month == 5)
    {
        cout << "May" << endl;
    }
    else if (Month == 6)
    {
        cout << "June" << endl;
    }
    else if (Month == 7)
    {
        cout << "July" << endl;
    }
    else if (Month == 8)
    {
        cout << "August" << endl;
    }
    else if (Month == 9)
    {
        cout << "September" << endl;
    }
    else if (Month == 10)
    {
        cout << "October" << endl;
    }
    else if (Month == 11)
    {
        cout << "November" << endl;
    }
    else
    {
        cout << "December" << endl;
    }

    return 0;
}
