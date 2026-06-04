#include <iostream>
using namespace std;

int main()
{
    int LoanAmount, MonthlyPayment, NumberOfMonths;

    cout << "Enter the Loan Amount?\n";
    cin >> LoanAmount;

    cout << "Enter the Monthly Payment?\n";
    cin >> MonthlyPayment;

    NumberOfMonths = LoanAmount / MonthlyPayment;

    cout << NumberOfMonths << " Months" << endl;

    return 0;
}
