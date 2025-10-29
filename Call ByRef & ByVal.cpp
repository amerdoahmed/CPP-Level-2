#include <iostream>

using namespace std;

// Call ByRef / ByVal

void Function1(int& x)
{
    x++;
}

int main()
{
    int a = 10;

    Function1(a);

    //cout << "\n a After Function1 = " << a << endl;

    cout << a << endl;
    cout << &a << endl;
}

