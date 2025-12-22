#include <iostream>

using namespace std;

// - Memory Management: new and delete

int main()
{
    // declare an integer poniter 
    int* ptrX;

    // declare an float poniter 
    float* ptrY;

    // dynamically allocate memory
    ptrX = new int;
    ptrY = new float;

    // assigning values to the memory
    *ptrX = 50;
    *ptrY = 10.5;

    cout << *ptrX << endl;
    cout << *ptrY << endl;

    // dellocate the memory 
    delete ptrX;
    delete ptrY;

    return 0;
}