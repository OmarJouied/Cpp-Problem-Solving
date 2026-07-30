#include <iostream>
#include <string>

using namespace std;

int main()
{
    string FullName, BirthYear;

    cout << "Please enter your full name?\n";
    getline(cin, FullName);

    cout << "Please enter your birth year?\n";
    cin >> BirthYear;

    int Age = 2026 - stoi(BirthYear);

    cout << "Hello " << FullName << ", you are " << Age << " years old." << endl;
    return 0;
}
