#include <iostream>
using namespace std;

struct stFullName
{
    string FirstName;
    string LastName;
};

stFullName ReadFullName()
{
    stFullName FullName;

    cout << "Please enter your firstName?\n";
    cin >> FullName.FirstName;

    cout << "Please enter your lastName?\n";
    cin >> FullName.LastName;

    return FullName;
}

string GetFullName(stFullName FullName, bool Reversed)
{
    if (Reversed)
        return FullName.LastName + " " + FullName.FirstName;
    return FullName.FirstName + " " + FullName.LastName;
}

void PrintFullName(string FullName)
{
    cout << "\n Your Full Name : " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadFullName(), false));

    return 0;
}
