#include<iostream>

using namespace std;

// Validation Only Number
int ReadNumber()
{
	int Number;
	cout << "Please Enter a Number" << endl;
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Invalid Number, Enter a valid one :" << endl;

		cin >> Number;
	}
	return Number;
}

int main()
{
	cout << "Tour Number is: " << ReadNumber();
	return 0;
}