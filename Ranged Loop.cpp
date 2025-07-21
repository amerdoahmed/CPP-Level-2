#include<iostream>

using namespace std;

// Ranged Loop

int main()
{
	int Array1[] = { 1,2,3,4,5,6,7,8,9 };
	for (int n : Array1)
	{
		cout << n << endl;
	}

	return 0;
}