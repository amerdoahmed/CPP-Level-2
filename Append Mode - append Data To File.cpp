#include <iostream>
#include <fstream>

using namespace std;

// - Append Mode: Append Data To File

int main()
{
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out | ios::app); // Append mode 

    if (MyFile.is_open())
    {
        MyFile << "\nThis is file with append mode in C++ \n";
        MyFile << "I put app function with out \n";
        MyFile << "( ios::out | ios::app )\n";
        MyFile.close();
    }

    return 0;
}