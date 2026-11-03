#include <iostream>
using namespace std;

struct stInfo
{
    short Age;
    bool HasDriverLicense;
    bool HasRecommendation;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your age?" << endl;
    cin >> Info.Age;

    cout << "Did you have a driver license?" << endl;
    cin >> Info.HasDriverLicense;

    cout << "Did you have a recommendation?" << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return Info.HasRecommendation || Info.Age > 21 && Info.HasDriverLicense;
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
