#include <iostream>
#include <string>

using namespace std;

// String Object - (Common Methods)

int main()
{
    string S1 = "Hello, my name is Ahmed AMERDO, I love programmingadvices roadmap.";

    cout << S1.length() << endl;
    cout << S1.at(10) << endl;
    cout << S1.at(56) << endl;
    try
    {
        cout << S1.at(68) << endl;

    }
    catch (...)
    {
        cout << "out of bound\n";
    }

    S1.append(" great map");
    cout << S1 << endl;

    S1.insert(5, " everybody");
    cout << S1 << endl;

    cout << S1.substr(42, 25) << endl;

    S1.push_back('X');
    cout << S1 << endl;
    S1.pop_back();
    cout << S1 << endl;

    cout << S1.find("Ahmed") << endl;

    cout << S1.find("Amerdo") << endl;
    if (S1.find("Amerdo") == S1.npos)
    {
        cout << "Amerdo is not found\n";
    }

    S1.clear();
    cout << S1 << endl;

    return 0;
}