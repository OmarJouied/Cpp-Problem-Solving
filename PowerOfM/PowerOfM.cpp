#include <iostream>
#include <cmath>

using namespace std;

void PowerOfM(int Number, int Power)
{
    cout << Number << " ^ " << Power << " = " << pow(Number, Power) << endl;
}

int main()
{
    int Number, Power;

    cout << "Please enter a Number?\n";
    cin >> Number;

    cout << "Please enter a Power?\n";
    cin >> Power;
    
    PowerOfM(Number, Power);

    return 0;
}
