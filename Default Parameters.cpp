#include <iostream>

using namespace std;

// Default Parameters:
int Sum(int a, int b = 0, int c = 0)
{
    return  a + b + c;
}

int main()
{
    cout << "C++ Level 2 \n\n";

    cout << Sum(10) << endl;
    cout << Sum(10, 10) << endl;
    cout << Sum(10, 20, 30) << endl;
}

