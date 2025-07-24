#include <iostream>

using namespace std;

// Function Overloading:

double Sum(double a = 0, double b = 0)
{
    return (a + b);
}

int Sum(int a = 0, int b = 0)
{
    return (a + b);
}

int Sum(int a = 0, int b = 0, int c = 0)
{
    return (a + b + c);
}

int Sum(int a = 0, int b = 0, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main()
{
    cout << "C++ Level 2 \n\n";

    cout << Sum(1.5, 8.5) << endl;
}

