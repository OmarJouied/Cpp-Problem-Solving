#include <iostream>
#include <cmath>

using namespace std;

double CircleAreaInscribedInAnIsoscelesTriangle(int base, int leg)
{
	const float PI = 3.14;

	return PI * pow(base, 2) / 4 * (2 * leg - base) / (2 * leg + base);
}

int main()
{
	int leg, base;
	float Area;

	cout << "Enter A?\n";
	cin >> leg;

	cout << "Enter B?\n";
	cin >> base;

	Area = CircleAreaInscribedInAnIsoscelesTriangle(base, leg);

	cout << "Circle Area = " << Area << endl;

	return 0;
}
