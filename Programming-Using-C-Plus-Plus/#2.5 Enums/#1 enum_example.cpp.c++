#include<iostream>
using namespace std;

enum enMyFullName { Ahmed, Owdah };
enum enMyAge { Age = 22, Years };
enum enMyCity { ALbaha };
enum enMyCountry { Saudi_Arabia };
enum enMyMonthlySalary { MySalary = 7500 };
enum enMyPhoneNumbers { MyPhoneNumbers = 123456789 };
enum enMyGender { Female, Male };
enum enAmIMorried { Single, Morried };

int main()
{
	//********************************************
	enMyFullName MyFirstName, MySecondName;
	enMyAge MyAge;
	enMyCity MyCity;
	enMyCountry MyCountry;
	enMyMonthlySalary MyMonthlySalary;
	enMyPhoneNumbers MyPhoneNumbers;
	enMyGender MyGender;
	enAmIMorried AmIMorried;
	//********************************************
	MyFirstName, MySecondName = enMyFullName::Ahmed, enMyFullName::Owdah;
	MyAge = enMyAge::Age, enMyAge::Years;
	MyCity = enMyCity::ALbaha;
	MyCountry = enMyCountry::Saudi_Arabia;
	MyMonthlySalary = enMyMonthlySalary::MySalary;
	MyPhoneNumbers = enMyPhoneNumbers::MyPhoneNumbers;
	MyGender = enMyGender::Male;
	AmIMorried = enAmIMorried::Single;
	//********************************************

	cout << "***********************************\n";
	cout << "Name: " << MyFirstName << " " << MySecondName << "\n";
	cout << "Age: " << Age << Years << "\n";
	cout << "Phone: " << MyPhoneNumbers << "\n";
	cout << "City: " << MyCity << "\n";
	cout << "Country: " << MyCountry << "\n";
	cout << "Mounthly Salary: " << MyMonthlySalary << "\n";
	cout << "Yearly Salary: " << MyMonthlySalary * 12 << "\n";
	cout << "Gender: " << MyGender << "\n";
	cout << "Morried: " << AmIMorried << "\n";
	cout << "***********************************\n";

	return 0;
}