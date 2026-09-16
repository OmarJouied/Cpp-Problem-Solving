#include <iostream>
using namespace std;

struct stDistance
{
    int feet;
    float inches;
};

void ReadDistance(stDistance& D)
{
    cout << "Please enter feet?\n";
    cin >> D.feet;

    cout << "Please enter inches?\n";
    cin >> D.inches;
}

void PrintDistance(stDistance D)
{
    cout << D.feet << "' " << D.inches << "\"" << endl;
}

int main()
{
    stDistance Distance;

    ReadDistance(Distance);
    PrintDistance(Distance);

    return 0;
}
