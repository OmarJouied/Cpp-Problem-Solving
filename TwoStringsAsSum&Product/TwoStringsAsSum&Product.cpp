#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Num1, Num2;

    cout << "Please enter Num1?\n";
    cin >> Num1;

    cout << "Please enter Num2?\n";
    cin >> Num2;

    cout << "Sum: " << stoi(Num1) + stoi(Num2) << endl;
    cout << "Product: " << stoi(Num1) * stoi(Num2) << endl;

    return 0;
}
