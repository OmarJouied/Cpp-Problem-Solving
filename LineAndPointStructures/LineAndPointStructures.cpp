#include <iostream>
#include <cmath>

using namespace std;

struct stPoint
{
    int X;
    int Y;
};

void ReadPoint(stPoint &Point)
{
    cout << "Please enter the X axes of a Point?\n";
    cin >> Point.X;

    cout << "Please enter the Y axes of a Point?\n";
    cin >> Point.Y;
}

void PrintPoint(stPoint Point)
{
    cout << "(" << Point.X << ", " << Point.Y << ")" << endl;
}

void ShiftPoint(stPoint& Point, int dX, int dY)
{
    Point.X += dX;
    Point.Y += dY;
}

struct stLine
{
    stPoint StartPoint;
    stPoint EndPoint;
};

void ReadLine(stLine& Line)
{
    ReadPoint(Line.StartPoint);
    ReadPoint(Line.EndPoint);
}

void PrintLine(stLine& Line)
{
    PrintPoint(Line.StartPoint);
    PrintPoint(Line.EndPoint);
}

void ShiftLine(stLine& Line, int dX, int dY)
{
    ShiftPoint(Line.StartPoint, dX, dY);
    ShiftPoint(Line.EndPoint, dX, dY);
}

void ReadLines(stLine Lines[2])
{
    ReadLine(Lines[0]);
    ReadLine(Lines[1]);
}

void ShiftLines(stLine Lines[2], int dX, int dY)
{
    ShiftLine(Lines[0], dX, dY);
    ShiftLine(Lines[1], dX, dY);
}

void PrintLines(stLine Lines[2])
{
    PrintLine(Lines[0]);
    PrintLine(Lines[1]);
}

int main()
{
    stLine Lines[2];

    ReadLines(Lines);
    PrintLines(Lines);

    ShiftLines(Lines, 3, 5);
    PrintLines(Lines);

    return 0;
}
