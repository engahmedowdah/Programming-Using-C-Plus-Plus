#include <iostream>
using namespace std;
int main()
{
	float TotalSalary;
	float Percentage;

	cout << "Enter your total salary:\n";
	cin >> TotalSalary;

	if (TotalSalary >= 1000000)
	{
		Percentage = 0.01;
	}

	else if (TotalSalary >= 500000)
	{
		Percentage = 0.02;
	}

	else if (TotalSalary >= 100000)
	{
		Percentage = 0.03;
	}

	else if (TotalSalary >= 50000)
	{
		Percentage = 0.05;
	}

	else
	{
		Percentage = 0;
	}

	float TotalComission = TotalSalary * Percentage;
	TotalSalary += TotalComission;

	cout << "Your Total Comission is: " << TotalComission << "\n";
	cout << "Your Total Salary is: " << TotalSalary << "\n";
	return 0;
}