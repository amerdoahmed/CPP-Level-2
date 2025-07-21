#include<iostream>

using namespace std;

int ReadNumber()
{
	int Number;
	cout << "Enter Number\n";
	cin >> Number;
	return Number;
}

int main()
{

	int Number = ReadNumber();
	string Result;
	Result = (Number == 0) ? "Zero" : ((Number > 0) ? "Positive" : "Negative");
	cout << "Number is " << Result;



	return 0;
}