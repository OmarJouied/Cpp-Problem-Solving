#include <iostream>
using namespace std;

void ReadArrayNumbers(int Numbers[3])
{
    for (int i = 1; i <= 3; i++)
    {
        cout << "Please enter your number " << i << endl;
        cin >> Numbers[i - 1];
    }
}

int SumOfArrayNumbers(int Numbers[3])
{
    int Total = 0;

    for (int i = 0; i < 3; i++)
    {
        Total += Numbers[i];
    }

    return Total;
}

void PrintResults(int Total)
{
    cout << "\n The total sum of numbers is: " << Total << endl;
}

int main()
{
    int Numbers[3];

    ReadArrayNumbers(Numbers);
    PrintResults(SumOfArrayNumbers(Numbers));

    return 0;
}
