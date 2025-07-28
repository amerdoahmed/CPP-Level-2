#include <iostream>

using namespace std;

// Call Stack / Call Hierarchy :

void Fucntion3()
{
    cout << "\nCall Stack !\n";
}

void Function2()
{
    Fucntion3();
}

void Function1()
{
    Function2();
}

int main()
{
    cout << "C++ Level 2 \n\n";

    Function1();

}

