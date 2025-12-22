#include <iostream>

using namespace std;

// Pointers and Arrays :

int main()
{
    int arr[4] = { 10,20,30,40 };
    int* ptr;
    ptr = arr;

    cout << "Adresses are : \n";

    // cout << ptr << endl;
    // cout << ptr + 1 << endl;
    // cout << ptr + 2 << endl;
    // cout << ptr + 3 << endl;

    for (int i = 0; i <= 3; i++)
    {
        cout << ptr + i << endl;
    }

    cout << "\nValues are : \n";

    //cout << *(ptr) << endl;
    //cout << *(ptr +1 ) << endl;
    //cout << *(ptr +2 ) << endl;
    //cout << *(ptr +3 ) << endl;

    for (int i = 0; i <= 3; i++)
    {
        cout << *(ptr + i) << endl;
    }

    return 0;
}

