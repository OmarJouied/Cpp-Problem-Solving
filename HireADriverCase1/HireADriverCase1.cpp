#include <iostream>
using namespace std;

struct stInfo
{
    short Age;
    bool HasDriverLicense;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your age?" << endl;
    cin >> Info.Age;

    cout << "Did you have a driver license?" << endl;
    cin >> Info.HasDriverLicense;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return Info.Age > 21 && Info.HasDriverLicense;
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected" << endl;
}

int main()
{
    PrintResult(ReadInfo());

    return 0;
}
