#include <iostream>
#include <string>

using namespace std;

int main()
{
    string FullName, MyCity, HelloMessage;

    cout << "Please enter your full name?\n";
    getline(cin, FullName);

    cout << "Please enter your city?\n";
    cin >> MyCity;

    HelloMessage = "Welcome " + FullName + " from " + MyCity + "!";

    cout << HelloMessage << endl;
    cout << "Your full name has " << FullName.length() << " characters." << endl;

    return 0;
}
