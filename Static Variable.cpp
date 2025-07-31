#include <iostream>

using namespace std;

// Static Variable

void MyFunc()
{
    static int Number = 1;
    cout << "Value of Number : " << Number << endl;
    Number++;

}


int main()
{
    cout << "C++ Level 2 \n\n";

    MyFunc();
    MyFunc();
    MyFunc();


    return 0;

}

