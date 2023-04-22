#include <iostream>
using namespace std;

enum enMonths { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

int main()
{
	enMonths Months;

	cout << "*************************************\n";
	cout << "What month were you born in?\n";
	cout << "(1) January\n";
	cout << "(2) February\n";
	cout << "(3) March\n";
	cout << "(4) April\n";
	cout << "(5) May\n";
	cout << "(6) June\n";
	cout << "(7) July\n";
	cout << "(8) August\n";
	cout << "(9) September\n";
	cout << "(10) October\n";
	cout << "(11) November\n";
	cout << "(12) December\n";
	cout << "*************************************\n";

	cout << "Please enter your chose months: ";
	short choseMnonth;
	cin >> choseMnonth;

	string messageChosenMonth = "Chosen month: ";
	if (choseMnonth == enMonths::January)
	{
		cout << messageChosenMonth << "January";
	}

	else if (choseMnonth == enMonths::February)
	{
		cout << messageChosenMonth << "February";
	}

	else if (choseMnonth == enMonths::March)
	{
		cout << messageChosenMonth << "March";
	}

	else if (choseMnonth == enMonths::April)
	{
		cout << messageChosenMonth << "April";
	}

	else if (choseMnonth == enMonths::May)
	{
		cout << messageChosenMonth << "May";
	}

	else if (choseMnonth == enMonths::June)
	{
		cout << messageChosenMonth << "June";
	}

	else if (choseMnonth == enMonths::July)
	{
		cout << messageChosenMonth << "July";
	}

	else if (choseMnonth == enMonths::August)
	{
		cout << messageChosenMonth << "August";
	}

	else if (choseMnonth == enMonths::September)
	{
		cout << messageChosenMonth << "September";
	}

	else if (choseMnonth == enMonths::October)
	{
		cout << messageChosenMonth << "October";
	}

	else if (choseMnonth == enMonths::November)
	{
		cout << messageChosenMonth << "November";
	}

	else if (choseMnonth == enMonths::December)
	{
		cout << messageChosenMonth << "December";
	}

	else
	{
		cout << "This is not month.";
	}

	return 0;

}