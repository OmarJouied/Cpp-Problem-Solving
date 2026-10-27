#include <iostream>
using namespace std;

void PrintFromCapitalAToZ()
{
    short L = 65;
    while (L <= 90)
    {
        cout << (char)L << endl;
        L++;
    }
}

void PrintFromSmallAToZ()
{
    short L = 97;
    while (L <= 122)
    {
        cout << (char)L << endl;
        L++;
    } 
}

int main()
{
    PrintFromCapitalAToZ();
    PrintFromSmallAToZ();

    return 0;
}
