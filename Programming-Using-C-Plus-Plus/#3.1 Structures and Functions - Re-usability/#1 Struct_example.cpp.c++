#include <iostream>
#include <string>
using namespace std;

struct strHisAddress
{
	string HisCity;
	string HisCountry;

};

struct strHisInfo
{
	strHisAddress HisAddress;
	string HisFirstName;
	string HisLastName;
	unsigned short HisAge;
	unsigned int HisMonthlySalary;
	char HisGender;
	bool IsHeMorried;

};

void ReadInfo(strHisInfo& Info)
{
	cout << "Please enter your FirstName:\n";
	cin.ignore();
	getline(cin,Info.HisFirstName);

	cout << "Please enter your LastName:\n";
	cin.ignore();
	getline(cin, Info.HisLastName);

	cout << "Please enter your Age:\n";
	cin >> Info.HisAge;

	cout << "Please enter your city:\n";
	cin.ignore();
	getline(cin, Info.HisAddress.HisCity);

	cout << "Please enter your country:\n";
	cin.ignore();
	getline(cin, Info.HisAddress.HisCountry);

	cout << "Please enter your Monthly Salary:\n";
	cin >> Info.HisMonthlySalary;

	cout << "Please enter your gender (F or M):\n";
	cin >> Info.HisGender;

	cout << "Are you Morried (true or false):\n";
	cin >> Info.IsHeMorried;
}


void PrintInfo(strHisInfo Info)
{
	cout << "\n****************************" << endl;

	cout << "Nmae: " << Info.HisFirstName << " " << Info.HisLastName << "\n";
	cout << "Age: " << Info.HisAge << "\n";
	cout << "City: " << Info.HisAddress.HisCity << "\n";
	cout << "Country: " << Info.HisAddress.HisCountry << "\n";
	cout << "Monthly Salary: " << Info.HisMonthlySalary << "\n";
	cout << "Yearly Salary: " << Info.HisMonthlySalary * 12 << "\n";
	cout << "Gender: " << Info.HisGender << "\n";
	cout << "Is he morried: " << Info.IsHeMorried << "\n";

	cout << "****************************";
}


int main()
{
	strHisInfo FirstInfo;
	ReadInfo(FirstInfo);
	PrintInfo(FirstInfo);
	return 0;
}