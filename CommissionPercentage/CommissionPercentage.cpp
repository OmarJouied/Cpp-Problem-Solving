#include <iostream>
using namespace std;

int main()
{
    int  TotalSales;
    double Commission;

    cout << "Please enter the Total Sales?\n";
    cin >> TotalSales;

    if (TotalSales >= 1000000)
    {
        Commission = TotalSales * .01;
    }
    else if (TotalSales >= 500000)
    {
        Commission = TotalSales * .02;
    }
    else if (TotalSales >= 100000)
    {
        Commission = TotalSales * .03;
    }
    else if (TotalSales >= 50000)
    {
        Commission = TotalSales * .05;
    }
    else
    {
        Commission = 0;
    }

    cout << "Commission: " << Commission << endl;

    return 0;
}
