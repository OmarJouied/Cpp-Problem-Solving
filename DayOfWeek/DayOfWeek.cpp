#include <iostream>
using namespace std;

int main()
{
    short Day;

    cout << "Please enter the number of day?\n";
    cin >> Day;

    if (Day == 1)
    {
        cout << "Its Sunday" << endl;
    }
    else if (Day == 2)
    {
        cout << "Its Monday" << endl;
    }
    else if (Day == 3)
    {
        cout << "Its Tuesday" << endl;
    }
    else if (Day == 4)
    {
        cout << "Its Wednesday" << endl;
    }
    else if (Day == 5)
    {
        cout << "Its Thursday" << endl;
    }
    else if (Day == 6)
    {
        cout << "Its Friday" << endl;
    }
    else if (Day == 7)
    {
        cout << "Its Saturday" << endl;
    }
    else
    {
        cout << "Wrong Day" << endl;
    }

    return 0;
}
