#include <iostream>
using namespace std;

void ApplyTax(double& price, double taxRate)
{
    price *= 1 + taxRate;
}

int main()
{
    double Price = 250, TaxRate = .1;

    cout << "Price: " << Price << " | Tax Rate = " << TaxRate << endl;
    ApplyTax(Price, TaxRate);
    cout << "Total Price: " << Price << endl;

    return 0;
}
