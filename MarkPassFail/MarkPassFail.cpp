#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

int ReadMark()
{
    int Mark;

    cout << "Please enter the Mark?\n";
    cin >> Mark;

    return Mark;
}

enPassFail CheckMark(int Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    return enPassFail::Fail;
}

void PrintResult(int Mark)
{
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "\n You PASSED" << endl;
    else
        cout << "\n You FAILD" << endl;
}

int main()
{
    PrintResult(ReadMark());

    return 0;
}
