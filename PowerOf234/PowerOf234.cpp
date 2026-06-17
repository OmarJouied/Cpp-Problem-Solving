#include <iostream>
using namespace std;

int main()
{
    int Number, PowerTwo;

    cout << "Enter a Number?\n";
    cin >> Number;

    PowerTwo = Number * Number;

    cout << Number << " ^ 2 = " << PowerTwo << endl;
    cout << Number << " ^ 3 = " << PowerTwo * Number << endl;
    cout << Number << " ^ 4 = " << PowerTwo * PowerTwo << endl;

    return 0;
}
