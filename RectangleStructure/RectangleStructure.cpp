#include <iostream>
using namespace std;

struct stRectangle
{
    float width;
    float length;
};

void ReadRectangle(stRectangle& R)
{
    cout << "Please enter width?\n";
    cin >> R.width;

    cout << "Please enter length?\n";
    cin >> R.length;
}

void PrintRectangle(stRectangle R)
{
    cout << "width = " << R.width << endl;
    cout << "length = " << R.length << endl;
}

float CalculateRectangleArea(stRectangle Rectangle)
{
    return Rectangle.length * Rectangle.width;
}

void ReadRectangles(stRectangle Rectangles[3])
{
    ReadRectangle(Rectangles[0]);
    ReadRectangle(Rectangles[1]);
    ReadRectangle(Rectangles[2]);
}

void PrintRectangles(stRectangle Rectangles[3])
{
    PrintRectangle(Rectangles[0]);
    PrintRectangle(Rectangles[1]);
    PrintRectangle(Rectangles[2]);
}

float CalculateTotalRectanglesArea(stRectangle Rectangles[3])
{
    return CalculateRectangleArea(Rectangles[0]) + CalculateRectangleArea(Rectangles[1]) + CalculateRectangleArea(Rectangles[2]);
}

int main()
{
    stRectangle Rectangles[3];

    ReadRectangles(Rectangles);
    PrintRectangles(Rectangles);

    cout << "Total Rectangle Area: " << CalculateTotalRectanglesArea(Rectangles) << endl;

    return 0;
}
