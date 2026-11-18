#include <iostream>
using namespace std;

void ReadDimensions(float& length, float& width)
{
    cout << "Enter the Length ?\n";
    cin >> length;

    cout << "Enter the width ?\n";
    cin >> width;
}

float calculateRectangleArea(float width, float height)
{
    return width * height;
}

void PrintArea(float Area)
{
    cout << "Rectangle Area = " << Area << endl;
}

int main()
{
    float length, width;

    ReadDimensions(length, width);

    PrintArea(calculateRectangleArea(width, length));

    return 0;
}
