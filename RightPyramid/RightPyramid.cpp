#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (int j = 1; j <= 5 - i; j++)
            {
                cout << " ";
            }

            for (int k = 1; k <= i; k++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= i - 5; j++)
            {
                cout << " ";
            }

            for (int k = 1; k <= 10 - i; k++)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}
