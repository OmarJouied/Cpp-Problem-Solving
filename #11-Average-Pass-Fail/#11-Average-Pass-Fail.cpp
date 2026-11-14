#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Enter the Mark 1?\n";
    cin >> Mark1;

    cout << "Enter the Mark 2?\n";
    cin >> Mark2;

    cout << "Enter the Mark 3?\n";
    cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    return enPassFail::Fail;
}

void PrintResults(float Average)
{
    cout << "\n Your Average is: " << Average << endl;

    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "\n You PASS" << endl;
    else
        cout << "\n You FAIL" << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;

    ReadMarks(Mark1, Mark2, Mark3);
    PrintResults(CalculateAverage(Mark1, Mark2, Mark3));

    return 0;
}