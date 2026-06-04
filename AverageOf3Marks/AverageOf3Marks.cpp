#include <iostream>
using namespace std;

int main()
{
    int Mark1, Mark2, Mark3, Average;

    cout << "Enter Mark 1?\n";
    cin >> Mark1;
    
    cout << "Enter Mark 2?\n";
    cin >> Mark2;
    
    cout << "Enter Mark 3?\n";
    cin >> Mark3;

    Average = (Mark1 + Mark2 + Mark3) / 3;

    cout << endl << Average << endl;

    return 0;
}
