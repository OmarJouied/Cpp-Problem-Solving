#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int k = 1; k <= 10 - i; k++)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}
