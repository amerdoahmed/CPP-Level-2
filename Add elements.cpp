// Add elements :
#include <iostream>
#include <vector>
using namespace std;

void ReadNumber(vector <int>& vNumbers)
{
	char ReadMore = 'Y';
	int Number;
	while (ReadMore == 'y' || ReadMore == 'Y')
	{
		cout << "Pleas enter a Number ? ";
		cin >> Number;
		vNumbers.push_back(Number);
		cout << "\nDo you want to more numbers ? Y / N ? ";
		cin >> ReadMore;
	}
}

void PrintVectorNumber(vector <int>& vNumbers)
{
	cout << "Numbers Vector : \n\n";
	// Ranged Loop
	for (int& Number : vNumbers)
	{
		cout << Number << endl;
	}
}
int main()
{
	vector <int> vNumbers;
	ReadNumber(vNumbers);
	PrintVectorNumber(vNumbers);
}