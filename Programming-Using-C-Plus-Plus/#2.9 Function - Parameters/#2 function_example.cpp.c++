#include <iostream>
#include <string>
using namespace std;

void PrintUesrName()
{
	string HisFirstName, HisSecondName;
	cout << "Please enter your name:\n";
	getline(cin,HisFirstName);
	cout << "Please enter your second name:\n";
	getline(cin,HisSecondName);
	cout << "Name: " << HisFirstName << " " << HisSecondName << "\n";
}

int main()
{
	PrintUesrName();
	return 0;

}