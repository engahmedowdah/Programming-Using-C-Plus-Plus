#include <iostream>
#include <string> //Call this library to use getline
using namespace std;
int main()
{
	//Homework User Inputs.
	string HisFullName;
	unsigned short int HisAge;
	//"unsigned" is used for non-negative digital variables.
	//"short" is used to define small-sized numeric variable.
	string HisCity;
	string HisCountry;
	float HisMonthlySalary;
	char HisGender;

	cout << "Please enter your name:\n";
	cin.ignore();
	getline(cin, HisFullName);
	cout << "Please enter your age:\n";
	cin >> HisAge;
	cout << "Please enter your city:\n";
	cin.ignore();
	getline(cin, HisCity);
	cout << "Please enter your country:\n";
	cin.ignore();
	getline(cin, HisCountry);
	cout << "Please enter your monthly salary:\n";
	cin >> HisMonthlySalary;
	cout << "Please enter your gender:\n";
	cin >> HisGender;

	cout << "\n\n";
	cout << "Homework 1:\n\n"; // Print His Info
	cout << "***************************\n";
	cout << "Name: " << HisFullName << ".\n";
	cout << "Age: " << HisAge << "Years.\n";
	cout << "Country: " << HisCountry << ".\n";
	cout << "Monthly Salary: " << HisMonthlySalary << "\n";
	cout << "Yearly Salary: " << HisMonthlySalary * 12 << "\n";
	cout << "Gender: " << HisGender << "\n";
	cout << "***************************" << endl << endl;
	return 0;
}