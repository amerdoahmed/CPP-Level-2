// Vector Functions :

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	vNumbers.push_back(60);
	vNumbers.push_back(70);



	cout << "First Element : " << vNumbers.front() << endl;
	cout << "First Element : " << vNumbers.back() << endl;
	cout << "Size          : " << vNumbers.size() << endl;
	cout << "Capacity      : " << vNumbers.capacity() << endl;
	cout << "is Empty      : " << vNumbers.empty() << endl;
	vNumbers.clear();


	return 0;
}