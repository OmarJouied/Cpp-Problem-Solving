#include <iostream>
#include <string>

using namespace std;

int main()
{
    string ProductName, Price, Quantity;

    cout << "Please enter Product Name?\n";
    getline(cin, ProductName);

    cout << "Please enter price?\n";
    cin >> Price;

    cout << "Please enter quantity?\n";
    cin >> Quantity;

    cout << ProductName << " has " << ProductName.length() << " characters." << endl;
    cout << "Price: " << Price << ". Quantity: " << Quantity << ". Total Price: " << stoi(Quantity) * stoi(Price) << endl;

    return 0;
}
