#include <iostream>

using namespace std;

// - Pointer to Void

int main()
{
    void* ptr;

    float f1 = 10.5;
    int x = 11;
    char y = 'A';

    ptr = &f1;

    cout << ptr << endl;
    cout << *(static_cast<float*>(ptr)) << endl;

    ptr = &x;
    cout << ptr << endl;
    cout << *(static_cast<int*>(ptr)) << endl;

    ptr = &y;
    cout << ptr << endl;
    cout << *(static_cast<char*>(ptr)) << endl;


    return 0;
}