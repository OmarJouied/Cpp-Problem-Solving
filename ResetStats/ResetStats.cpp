#include <iostream>
using namespace std;

void ResetStats(int &Score, int &Health)
{
    Score = 0;
    Health = 100;
}

int main()
{
    int score = 73, health = 265;

    cout << "before reseting" << endl;
    cout << "-------------------" << endl;

    cout << "Score: " << score << ", Health: " << health << endl;

    ResetStats(score, health);
    cout << "\nafter reseting" << endl;
    cout << "-------------------" << endl;

    cout << "Score: " << score << ", Health: " << health << endl;

    return 0;
}
