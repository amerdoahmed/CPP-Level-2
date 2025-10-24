// Remove elements HOMEWORK
#include <iostream>
#include <vector>
using namespace std;

struct stEmployee
{
	string FirstName;
	string LastName;
	float Salary;
};

void ReadEmployess(vector<stEmployee>& vEmployees)
{
	char ReadMore = 'Y';
	stEmployee tempEmployees;
	while (ReadMore == 'Y' || ReadMore == 'y')
	{
		cout << "Please Enter Employee First Name\n";
		cin >> tempEmployees.FirstName;

		cout << "Please Enter Employee Last Name\n";
		cin >> tempEmployees.LastName;

		cout << "Please Enter Employee Salary\n";
		cin >> tempEmployees.Salary;

		vEmployees.push_back(tempEmployees);

		cout << "\nDo you need to enter more employees ? Y/N ? ";
		cin >> ReadMore;
	}
}

void PrintVectorEmployees(vector<stEmployee>& vEmployees)
{
	cout << "Employees Vector : \n\n";
	for (stEmployee& Employee : vEmployees)
	{
		cout << "First Name : " << Employee.FirstName << endl;
		cout << "Last Name : " << Employee.LastName << endl;
		cout << "Salary: " << Employee.Salary << endl;
		cout << endl;
	}
	cout << endl;
}

int main()
{
	vector <stEmployee> vEmployee;
	ReadEmployess(vEmployee);
	PrintVectorEmployees(vEmployee);

	return 0;
}