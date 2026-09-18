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

double LengthOfLine(stLine Line)
{
    return sqrt(pow(Line.StartPoint.Y - Line.EndPoint.Y, 2) + pow(Line.StartPoint.X - Line.EndPoint.X, 2));
}

int main()
{
    stLine Line;

    ReadLine(Line);
    PrintLine(Line);

    cout << "Length of Line = " << LengthOfLine(Line);

    return 0;
}
