#include<iostream>

using namespace std;

//	- Dereferencing Pointer


int main()
{

	cout << "Pointer : \n\n";

	int a = 10;
	cout << "a value         = " << a << endl;
	cout << "a adress value  = " << &a << endl << endl;

	int* p = &a;

	cout << "pointer value                  = " << p << endl;
	cout << "dereferencing value of pointer = " << *p << endl << endl;

	*p = 20;

	cout << "a value         = " << a << endl;
	cout << "a adress value  = " << &a << endl << endl;

	cout << "pointer value                  = " << p << endl;
	cout << "dereferencing value of pointer = " << *p << endl << endl;



	return 0;
}