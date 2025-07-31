#include <iostream>

using namespace std;

// Recursion

int MyPower(int Base, int Power)
{

    if (Power == 0)
        return 1;
    else
    {
        return (Base * MyPower(Base, Power - 1));
    }
}


int main()
{
    cout << "C++ Level 2 \n\n";

    cout << MyPower(2, 5);

    return 0;

}

