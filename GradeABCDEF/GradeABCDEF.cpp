#include <iostream>
using namespace std;

int main()
{
    short Grade;

    cout << "Please enter your grade?\n";
    cin >> Grade;

    if (Grade >= 90 && Grade <= 100)
    {
        cout << "A" << endl;
    }
    else if (Grade >= 80)
    {
        cout << "B" << endl;
    }
    else if (Grade >= 70)
    {
        cout << "C" << endl;
    }
    else if (Grade >= 60)
    {
        cout << "D" << endl;
    }
    else if (Grade >= 50)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    return 0;
}
