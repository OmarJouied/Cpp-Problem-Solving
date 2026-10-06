#include <iostream>
using namespace std;

struct stPlayer
{
    string Name;
    int Score[3];
};

void ReadPlayer(stPlayer& Player)
{
    cout << "Please enter the Name?\n";
    cin >> Player.Name;

    cout << "Please enter the Score 1?\n";
    cin >> Player.Score[0];

    cout << "Please enter the Score 2?\n";
    cin >> Player.Score[1];

    cout << "Please enter the Score 3?\n";
    cin >> Player.Score[2];
}

void PrintPlayer(stPlayer Player)
{
    cout << "Name: " << Player.Name << endl;
    cout << "Score 0: " << Player.Score[0] << endl;
    cout << "Score 1: " << Player.Score[1] << endl;
    cout << "Score 2: " << Player.Score[2] << endl;
}

int main()
{
    stPlayer Player;

    ReadPlayer(Player);
    PrintPlayer(Player);

    if (Player.Score[0] >= 50 && Player.Score[1] >= 50 && Player.Score[2] >= 50)
    {
        cout << "winner" << endl;
    }
    else
    {
        cout << "game over" << endl;
    }

    return 0;
}
