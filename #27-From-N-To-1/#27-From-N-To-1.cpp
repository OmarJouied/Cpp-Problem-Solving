#include <iostream>
using namespace std;

void PrintNTo1(int Number)
{
    int i = Number;
    while (i >= 1)
    {
        cout << i << endl;
        i--;
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
