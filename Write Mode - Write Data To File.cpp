#include <iostream>
#include <fstream>

using namespace std;

// - Write Mode: Write Data To File

int main()
{
    fstream MyFile;

    MyFile.open("MyFile.txt", ios::out); // Write mode 

    if (MyFile.is_open())
    {
        MyFile << "Hello\n\n";
        MyFile << "This is my first file with write mode in C++ \n";
        MyFile << "\nSubject ( Data To File ) \n";
        MyFile.close();

    }

    return 0;
}