#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    struct player {
        int pnum;
        string name;
        int lives;
        bool plive;
    };

    player mainplayer;
    mainplayer.pnum = 1;
    mainplayer.name = "mario";
    mainplayer.lives = 1;
    mainplayer.plive = true;

    cout << "Type your name here";

    string wordsnow = "New concept";

    cin >> wordsnow;
    cout << endl;
    cout << wordsnow;
    cout << endl;

    return 0;
}
