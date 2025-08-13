#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    cout << "------------\n";
    cout << "C++ Level 2 \n";
    cout << "------------\n\n";
    cout << "Setw Manipulator \n\n";

    cout << "---------|------------------------------|---------|" << endl;
    cout << "   Code  |              Name            |   Mark  |" << endl;
    cout << "---------|------------------------------|---------|" << endl;

    cout << setw(9) << "C101" << "|" << setw(30) << "introduction to Programming" << "|" << setw(9) << "95" << "|" << endl;
    cout << setw(9) << "C102" << "|" << setw(30) << "Computer Hardware" << "|" << setw(9) << "95" << "|" << endl;
    cout << setw(9) << "C103524" << "|" << setw(30) << "Network" << "|" << setw(9) << "95" << "|" << endl;
    return 0;

}

