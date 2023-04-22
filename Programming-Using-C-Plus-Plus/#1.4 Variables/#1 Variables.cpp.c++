#include <iostream>
using namespace std;
int main()
{
	string MyName = "Ahmed Owdah";
	unsigned short int MyAge = 22; 
	//"unsigned" is used for non-negative digital variables.
	//"short" is used to define small-sized numeric variable.
	string MyCity = "ALbaha";
	string MyCountry = "Saudi Arabia";
	float MyMonthlySalary = 7000;
	char MyGender = 'M';
	bool AmIMarried = false;


	cout << "Variable homework\n"; // Print My Info
	cout << "***************************\n";
	cout << "Name: " << MyName << ".\n";
	cout << "Age: " << MyAge << "Years.\n";
	cout << "Country: " << MyCountry << ".\n";
	cout << "Monthly Salary: " << MyMonthlySalary <<"\n";
	cout << "Yearly Salary: " << MyMonthlySalary * 12 << "\n";
	cout << "Gender: " << MyGender << "\n";
	cout << "Married: " << AmIMarried << endl;
	cout << "***************************" << endl;
	return 0;
}