#include <iostream>

using namespace std;

//  Call by Reference: Using pointers

void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main()
{
    int a = 1, b = 2;

    cout << "Before swapping : " << endl;
    cout << "a Value        = " << a << endl;
    cout << "b Value        = " << b << endl;

    swap(&a, &b);
    cout << "\nAfter swapping : " << endl;
    cout << "a Value        = " << a << endl;
    cout << "b Value        = " << b << endl;

    return 0;
}

