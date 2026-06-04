#include <iostream>
using namespace std;

int main()
{
    int BillValue;
    float TotalBill;

    cout << "Enter the Bill Value?\n";
    cin >> BillValue;

    TotalBill = BillValue * 1.1 * 1.16;

    cout << "\nTotal Bill = " << TotalBill << endl;

    return 0;
}
