#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "World"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    cout << 95*88;
    cout << endl;

    return 0;
}
