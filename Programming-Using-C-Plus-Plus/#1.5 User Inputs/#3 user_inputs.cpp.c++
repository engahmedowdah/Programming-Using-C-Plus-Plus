#include <iostream>
using namespace std;
int main()
{
	//Homework User Inputs.
	unsigned short int HisAge;

	cout << "Please enter your age:\n";
	cin >> HisAge;

	int TotalOfAge = HisAge + 5;

	cout << "\n\n";

	cout << "Homework 3:\n\n"; // Age calculation
	cout << "After 5 years you will be " << TotalOfAge << " years old.\n";
	return 0;
}