#include <iostream>
using namespace std;

void update(int a, int& b)
{
    a = a * 2; // لن يحدث تغيير على المتغير الممرر لأنه مرر بالقيمة
    b = a + b; // سيحدث تغيير في المتغير الأصلي لأنه مرر بالمرجع
}

int main()
{
    int x = 5;
    int y = 10;

    // x لن يتغير
    // y سيتغير
    update(x, y);

    cout << "x: " << x << ", y: " << y << endl;

    return 0;
}
