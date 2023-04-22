#include <iostream>
using namespace std;

enum enArabCountries { Saudi = 1, Iraq = 2, Tunisia = 3, Yemen = 4, Oman = 5};

int main()
{
	enArabCountries ArabCountries;

	cout << "***************************\n";
	cout << "What is your Country?\n";
	cout << "(1) Saudi Arabia.\n";
	cout << "(2) Iraq.\n";
	cout << "(3) Tunisia.\n";
	cout << "(4) Yemen.\n";
	cout << "(5) Oman.\n";
	cout << "(6) Other.\n";
	cout << "***************************\n";

	int NumberChoice;

	cin >> NumberChoice;

	ArabCountries = (enArabCountries) NumberChoice;

	if (NumberChoice == enArabCountries::Saudi)
	{
		cout << "Your Nationality is: Saudi.";
	}

	else if (NumberChoice == enArabCountries::Iraq)
	{
		cout << "Your Nationality is: Iraqi.";
	}

	else if (NumberChoice == enArabCountries::Tunisia)
	{
		cout << "Your Nationality is: Tunisian.";
	}

	else if (NumberChoice == enArabCountries::Yemen)
	{
		cout << "Your Nationality is: Yemeni.";
	}

	else if (NumberChoice == enArabCountries::Oman)
	{
		cout << "Your Nationality is: Omani.";
	}

	else
	{
		cout << "Your Nationality is: Other.";
	}

	return 0;
}