#include <iostream>
#include <vector>

using namespace std;


int main()
{
    cout << "------------\n";
    cout << "C++ Level 2 \n";
    cout << "------------\n\n";
    cout << "Vectors Add elements \n\n";

    vector <int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    vNumbers.push_back(60);
    vNumbers.push_back(70);
    vNumbers.push_back(80);
    vNumbers.push_back(90);


    cout << "Number Vector : \n\n";

    for (int& Number : vNumbers) {
        cout << Number << endl;
    }
    cout << endl;

    return 0;
}

