#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// - Read Mode - Print File Content

void PrintFileContent(string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in); // read Mode
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}
		MyFile.close();
	}
}

int main() {

	PrintFileContent("MyFile.txt");

	return 0;
}