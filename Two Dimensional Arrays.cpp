#include<iostream>

using namespace std;

//  Two Dimensional Arrays


int main()
{
	// int x[Rows][Cols];
	int x[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0;j < 4;j++)
		{
			cout << x[i][j] << " ";
		}
		cout << endl;
	};

	cout << "-----------------------" << endl;
	int y[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0;j < 10;j++)
		{
			y[i][j] = (i + 1) * (j + 1);
		}
	};
	for (int i = 0;i < 10; i++)
	{
		for (int j = 0;j < 10;j++)
		{
			printf("%0*d ", 2, y[i][j]);
		};

		cout << endl;
	};
	return 0;
}