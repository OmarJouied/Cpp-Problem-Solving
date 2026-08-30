#include <iostream>
using namespace std;

void addFiveByValue(int Num)
{
    Num += 5;
}

void addFiveByRef(int &Num)
{
    Num += 5;
}

int main()
{
    int NumberByValue = 10, NumberByRef = 20;

    cout << "Before adding five to NumberByValue: " << NumberByValue << endl;
    addFiveByValue(NumberByValue);
    cout << "after adding five to NumberByValue: " << NumberByValue << endl;

    cout << "Before adding five to NumberByRef: " << NumberByRef << endl;
    addFiveByRef(NumberByRef);
    cout << "after adding five to NumberByRef: " << NumberByRef << endl;

    return 0;
}
