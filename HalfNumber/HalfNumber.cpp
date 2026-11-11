#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please enter a number?\n";
    cin >> Number;

    return Number;
}

float GetHalfNumber(int Number)
{
    return (float)Number / 2;
}

void PrintHalfNumber(int Number)
{
    string Result = "Half of " + to_string(Number) + " is " + to_string(GetHalfNumber(Number));
    cout << endl << Result << endl;
}

int main()
{

    PrintHalfNumber(ReadNumber());

    return 0;
}
