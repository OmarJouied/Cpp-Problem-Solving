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

int main()
{
    stRectangle Rectangle1, Rectangle2;

    ReadRectangle(Rectangle1);
    PrintRectangle(Rectangle1);

    ReadRectangle(Rectangle2);
    PrintRectangle(Rectangle2);

    return 0;
}
