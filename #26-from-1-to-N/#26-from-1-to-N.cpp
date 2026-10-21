#include <iostream>

using namespace std;

void Print1ToN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    int Number;

    cout << "Please enter a Number?\n";
    cin >> Number;

    Print1ToN(Number);

    return 0;
}
