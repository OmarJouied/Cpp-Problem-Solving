#include <iostream>
using namespace std;

void getSumAndDiff(int a, int b, int& sum, int& diff)
{
    sum = a + b;
    diff = a - b;
}

int main()
{
    int a = 25, b = 15, sum, diff;
    cout << "a = " << a << ", b = " << b << endl;

    getSumAndDiff(a, b, sum, diff);

    cout << "sum = " << sum << ", diff = " << diff << endl;

    return 0;
}
