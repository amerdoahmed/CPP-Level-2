//  Vector of Structure :

#include <iostream>
#include <vector>
using namespace std;

struct stEmployee
{
	string FirstName;
	string LastName;
	float Salary;
};

int main()
{
	vector <stEmployee> vEmployee;

	stEmployee tempEmployee;

	tempEmployee.FirstName = "Ahmed";
	tempEmployee.LastName = "AMERDO";
	tempEmployee.Salary = 7000;
	vEmployee.push_back(tempEmployee);

	tempEmployee.FirstName = "Hassan";
	tempEmployee.LastName = "EL ASSRI";
	tempEmployee.Salary = 10000;
	vEmployee.push_back(tempEmployee);

	tempEmployee.FirstName = "Youssef";
	tempEmployee.LastName = "Darmouch";
	tempEmployee.Salary = 10000;
	vEmployee.push_back(tempEmployee);

	cout << "Employee Vectore : \n\n";
	for (stEmployee& Employee : vEmployee)
	{
		cout << "First Name : " << Employee.FirstName << endl;
		cout << "Last Name : " << Employee.LastName << endl;
		cout << "Salary: " << Employee.Salary << endl;
		cout << endl;
	}

	cout << endl;
	return 0;
}