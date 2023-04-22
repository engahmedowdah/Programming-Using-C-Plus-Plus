#include<iostream>
using namespace std;

struct strMyAddress //We moved it to strMyInfo
{
	string MyCity;
	string MyCountry;

};

struct strMyInfo
{
	string MyFirstName;
	string MySecondName;
	string MyPhone;
	unsigned short int MyAge;
	float MyMonthlySalary;
	char MyGender;
	bool AmIMorried;

	strMyAddress MyAddress;
};

int main()
{
	strMyInfo MyInfo;
	MyInfo.MyFirstName = "Ahmed";
	MyInfo.MySecondName = "Owdah";
	MyInfo.MyAge = 22;
	MyInfo.MyPhone = "123456789";
	MyInfo.MyAddress.MyCity = "ALbaha";
	MyInfo.MyAddress.MyCountry = "Saudi Arabia";
	MyInfo.MyMonthlySalary = 7500;
	MyInfo.MyGender = 'M';
	MyInfo.AmIMorried = false;

	cout << "***********************************\n";
	cout << "Name: " << MyInfo.MyFirstName << " " << MyInfo.MySecondName << "\n";
	cout << "Age: " << MyInfo.MyAge << "\n";
	cout << "Phone: " << MyInfo.MyPhone << "\n";
	cout << "City: " << MyInfo.MyAddress.MyCity << "\n";
	cout << "Country: " << MyInfo.MyAddress.MyCountry << "\n";
	cout << "Mounthly Salary: " << MyInfo.MyMonthlySalary << "\n";
	cout << "Gender: " << MyInfo.MyGender << "\n";
	cout << "Morried: " << MyInfo.AmIMorried << "\n";
	cout << "***********************************\n";

	return 0;
}