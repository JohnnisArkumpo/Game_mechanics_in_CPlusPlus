#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "World"};

    string wordsnow = "New concept";

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    cout << wordsnow;
    cout << endl;

    return 0;
}
