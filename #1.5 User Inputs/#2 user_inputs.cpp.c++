#include <iostream>
using namespace std;
int main()
{
	//Homework User Inputs.
	int FirstNumber;
	int SecondNumber;
	int ThirdNumber;
	cout << "Please enter your First number:\n";
	cin >> FirstNumber;
	cout << "Please enter your Second number:\n";
	cin >> SecondNumber;
	cout << "Please enter your Second number:\n";
	cin >> ThirdNumber;


	int TotalOfSum = FirstNumber + SecondNumber + ThirdNumber;

	cout << "\n\n";

	cout << "Homework 2:\n\n"; // Calculator
	cout << FirstNumber << " +" << "\n";
	cout << SecondNumber << " +" << "\n";
	cout << ThirdNumber << "\n";
	cout << "--------------------------------\n";
	cout << "Total = " << TotalOfSum << endl;
	return 0;
}