#include <iostream>
using namespace std;

void PrintFromCapitalAToZ()
{
    for (short L = 65; L <= 90; L++)
    {
        cout << (char)L << endl;
    }
}

void PrintFromSmallAToZ()
{
    for (short L = 97; L <= 122; L++)
    {
        cout << (char)L << endl;
    }
}

int main()
{
    PrintFromCapitalAToZ();
    PrintFromSmallAToZ();

    return 0;
}
