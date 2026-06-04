#include <iostream>
using namespace std;

int main()
{
    int TotalBill, CashPaid, Remainder;

    cout << "Enter the TotalBill?\n";
    cin >> TotalBill;

    cout << "Enter the Cash Paid?\n";
    cin >> CashPaid;

    Remainder = CashPaid - TotalBill;

    cout << "Remainder = " << Remainder << endl;

    return 0;
}
