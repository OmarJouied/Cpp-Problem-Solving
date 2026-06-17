#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const float PI = 3.14;
	int leg, base;
	float Area;

	cout << "Enter A?\n";
	cin >> leg;

	cout << "Enter B?\n";
	cin >> base;

	Area = floor(PI * pow(base, 2) / 4 * (2 * leg - base) / (2 * leg + base));

	cout << "Circle Area = " << Area << endl;

	return 0;
}
