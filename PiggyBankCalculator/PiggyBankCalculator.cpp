#include <iostream>
using namespace std;

int main()
{
    int Pennies, Nickels, Dimes, Quaters, Dollars, TotalPennies;

    cout << "Enter Your Pennies?\n";
    cin >> Pennies;

    cout << "Enter Your Nickels?\n";
    cin >> Nickels;

    cout << "Enter Your Dimes?\n";
    cin >> Dimes;

    cout << "Enter Your Quaters?\n";
    cin >> Quaters;

    cout << "Enter Your Dollars?\n";
    cin >> Dollars;

    TotalPennies = Pennies + Nickels * 5 + Dimes * 10 + Quaters * 25 + Dollars * 100;

    cout << TotalPennies << " Pennies\n" << TotalPennies / 100 << " Dollars" << endl;

    return 0;
}
