#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Number, Power;

    cout << "Please enter a Number?\n";
    cin >> Number;

    cout << "Please enter a Power?\n";
    cin >> Power;
    
    cout << Number << " ^ " << Power << " = " << pow(Number, Power) << endl;

    return 0;
}
