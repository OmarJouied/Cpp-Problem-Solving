#include <iostream>
using namespace std;

void PrintNTo1(int Number)
{
    for (int i = Number; i >= 1; i--)
    {
        cout << i << endl;
    }
}

int main()
{
    int Number;

    cout << "Please enter a Number?\n";
    cin >> Number;
    
    PrintNTo1(Number);

    return 0;
}
