#include <iostream>
#include <string>

using namespace std;

void PrintEnteredName()
{
    string Name;
    
    cout << "Enter your name?" << endl;
    getline(cin, Name);

    cout << Name << endl;
}

int main()
{
    PrintEnteredName();

    return 0;
}
