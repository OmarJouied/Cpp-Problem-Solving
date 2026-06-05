#include <iostream>
using namespace std;

int main()
{
    int LoanAmount, NumberOfMonths, MonthlyPayment;

    cout << "Enter your Loan Amount?\n";
    cin >> LoanAmount;

    cout << "Enter the number of months to settle the loan?\n";
    cin >> NumberOfMonths;

    MonthlyPayment = LoanAmount / NumberOfMonths;

    cout << "\nMonthly Payment = " << MonthlyPayment << endl;

    return 0;
}
