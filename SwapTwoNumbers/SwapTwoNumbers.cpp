#include <iostream>
using namespace std;

int main()
{
    int Num1, Num2, tmp;
    
    cout << "Enter Number 1?\n";
    cin >> Num1;
    
    cout << "Enter Number 2?\n";
    cin >> Num2;
    
    cout << Num1 << "\n" << Num2 << "\n" << endl;

    tmp = Num1;
    Num1 = Num2;
    Num2 = tmp;
    
    cout << Num1 << "\n" << Num2 << endl;

    return 0;
}
