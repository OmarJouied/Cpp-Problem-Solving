#include <iostream>
using namespace std;

int main()
{
    short Day;

    cout << "Please enter the number of day?\n";
    cin >> Day;

    switch (Day) {
    case 1:
        cout << "Its Sunday" << endl;
        break;
    case 2:
        cout << "Its Monday" << endl;
        break;
    case 3:
        cout << "Its Tuesday" << endl;
        break;
    case 4:
        cout << "Its Wednesday" << endl;
        break;
    case 5:
        cout << "Its Thursday" << endl;
        break;
    case 6:
        cout << "Its Friday" << endl;
        break;
    case 7:
        cout << "Its Saturday" << endl;
        break;
    default:
        cout << "Wrong Day" << endl;
    }

    return 0;
}
