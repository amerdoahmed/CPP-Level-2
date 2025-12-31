#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// - Some CCTYPE Functions

int main()
{
    char x;
    char y;

    x = toupper('a');
    y = tolower('A');

    cout << "Converting a to A: " << x << endl;
    cout << "Converting A to a: " << y << endl;

    cout << "is upper('A') " << isupper('A') << endl;
    cout << "is islower('a') " << islower('a') << endl;
    cout << "is isdigit('9') " << isdigit('9') << endl;
    cout << "is ispunct('#') " << ispunct('#') << endl;

    return 0;
}