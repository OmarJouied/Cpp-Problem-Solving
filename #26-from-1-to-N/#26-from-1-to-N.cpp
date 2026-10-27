#include <iostream>

using namespace std;

void Print1ToN(int Number)
{
    int i = 1;
    while (i <= Number)
    {
        cout << i << endl;
        i++;
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
