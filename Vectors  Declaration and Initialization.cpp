#include <iostream>
#include <vector>

using namespace std;


int main()
{
    cout << "------------\n";
    cout << "C++ Level 2 \n";
    cout << "------------\n\n";
    cout << "Vectors , Declaration and Initialization \n\n";

    vector <int> vNumbers = { 10,20,30,40,50 };

    cout << "Number Vector = ";

    for (int& Number : vNumbers) {
        cout << Number << " ";
    }
    cout << endl;

    return 0;
}

