#include <iostream>
using namespace std;

string ATMPIN3Times()
{
    int TryingLimit = 3, counter = 1, ATMPIN;
    while (counter <= TryingLimit)
    {
        cout << "Please enter the correct PIN?\n";
        cin >> ATMPIN;

        if (ATMPIN == 1234)
        {
            return "Your Balance is: 7500\n";
        }
        else
        {
            cout << "Wrong PIN\n";
        }

        counter++;
    }

    return "Card is locked!";
}

int main()
{

    cout << ATMPIN3Times() << endl;

    return 0;
}
