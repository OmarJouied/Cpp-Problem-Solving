#include <iostream>
using namespace std;

void getRectangleMetrics(double length, double width, double& area, double& perimeter)
{
    area = length * width;
    perimeter = (length + width) * 2;
}

int main()
{
    double length = 10, width = 30, area, perimeter;

    cout << "length = " << length << ", width = " << width << endl;

    getRectangleMetrics(length, width, area, perimeter);

    cout << "area = " << area << ", perimeter = " << perimeter << endl;

    return 0;
}
