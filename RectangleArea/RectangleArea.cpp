#include <iostream>
using namespace std;

int calculateRectangleArea(int width, int height)
{
    return width * height;
}

int main()
{
    int length, width, area;

    cout << "Enter the Length ?\n";
    cin >> length;

    cout << "Enter the width ?\n";
    cin >> width;

    area = calculateRectangleArea(width, length);

    cout << "Rectangle Area = " << area << endl;

    return 0;
}
