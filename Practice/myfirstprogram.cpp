#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

float toCelcius(float f) {
    return (5.0/9.0)*(f-32.0);
}

int main()
{
    struct player {
        int pnum;
        string name;
        int lives;
        bool plive;
    };
    float farv = 68.0;
    float celcv = toCelcius(farv);
    cout << farv << " in celcius is " << celcv;
    player mainplayer;
    mainplayer.pnum = 1;
    mainplayer.name = "mario";
    mainplayer.lives = 1;
    mainplayer.plive = true;
    cout << endl;
    cout << "Type your name here";

    string wordsnow = "New concept";

    cin >> wordsnow;
    cout << endl;
    cout << wordsnow;
    cout << endl;

    return 0;
}
