#include <iostream>
using namespace std;

void ReadArrayMarks(int Marks[100], int& Length)
{
    cout << "Please enter the number of marks? (1 - 100)\n";
    cin >> Length;

    for (int i = 0; i < Length; i++)
    {
        cout << "Please enter the mark " << i + 1 << endl;
        cin >> Marks[i];
    }
}

int SumArrayMarks(int Marks[100], int Length)
{
    int Total = 0;

    for (int i = 0; i < Length; i++)
        Total += Marks[i];

    return Total;
}

float CalculateAverage(int Marks[100], int Length)
{
    return (float)SumArrayMarks(Marks, Length) / Length;
}

void PrintAverage(float Average)
{
    cout << "\n The Average is: " << Average << endl;
}

int main()
{
    int Marks[100], Length;

    ReadArrayMarks(Marks, Length);
    PrintAverage(CalculateAverage(Marks, Length));

    return 0;
}
