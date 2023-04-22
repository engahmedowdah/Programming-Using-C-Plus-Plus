#include <iostream>
#include <string>
using namespace std;

struct strInfo
{
	string HisFirstName;
	string HisLastName;
	unsigned short HisAge;
	string HisPhone;
};

void ReadInfo(strInfo &Info)
{
	cout << "Please enter your FirstName:\n";
	cin.ignore();
	getline(cin ,Info.HisFirstName);

	cout << "Please enter your LastName:\n";
	cin.ignore();
	getline(cin, Info.HisLastName);

	cout << "Please enter your age:\n";
	cin >> Info.HisAge;

	cout << "Please enter your phone:\n";
	cin >> Info.HisPhone;
}

void PrintInfo(strInfo Info)
{
	cout << "\n****************************\n";

	cout << "First Name: " << Info.HisFirstName << "\n";
	cout << "Last Name: " << Info.HisLastName << "\n";
	cout << "Age: " << Info.HisAge << "\n";
	cout << "Phone: " << Info.HisPhone << "\n";

	cout << "****************************" << endl;
}

void ReadPersonInfo(strInfo PersonInfo[2])
{
	ReadInfo(PersonInfo[0]);
	ReadInfo(PersonInfo[1]);
}

void PrintPersonInfo(strInfo PersonInfo[2])
{
	PrintInfo(PersonInfo[0]);
	PrintInfo(PersonInfo[1]);
}

int main()
{
	strInfo PersonInfo[2];
	ReadPersonInfo (PersonInfo);
	PrintPersonInfo (PersonInfo);
	return 0;
}