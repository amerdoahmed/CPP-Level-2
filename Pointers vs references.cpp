#include <iostream>

using namespace std;

// Pointers vs references

int main()
{
    int a = 1;

    cout << "a Value        = " << a << endl;
    cout << "a Adress       = " << &a << endl << endl;

    int* p;
    p = &a;

    cout << "*************************" << endl;
    cout << "We decalre pointer as \nint* p;\np = &a;" << endl;
    cout << "*************************" << endl;

    cout << endl;
    cout << "pointer value as *p  = " << *p << endl;
    cout << "pointer value as  p  = " << p << endl;
    cout << "pointer adress value = " << &p << endl << endl;

    // Pointer :
    p = &a;

    // Dereference
    *p = a;
    // OR 
    *p = 10;

    cout << "a Value        = " << a << endl;
    cout << "a Adress       = " << *p << endl;


    return 0;
}

