#include <iostream>
using namespace std;
int main()
{
	unsigned short Months_Input;
	string Months;

	cout << "Enter the month number:\n";
	cin >> Months_Input;

	if (Months_Input == 1)
	{
		Months = "January";
	}

	else if (Months_Input == 2)
	{
		Months = "February";
	}

	else if (Months_Input == 3)
	{
		Months = "Marsh";
	}

	else if (Months_Input == 4)
	{
		Months = "April";
	}

	else if (Months_Input == 5)
	{
		Months = "May";
	}

	else if (Months_Input == 6)
	{
		Months = "June";
	}

	else if (Months_Input == 7)
	{
		Months = "July";
	}

	else if (Months_Input == 8)
	{
		Months = "August";
	}

	else if (Months_Input == 9)
	{
		Months = "September";
	}

	else if (Months_Input == 10)
	{
		Months = "October";
	}

	else if (Months_Input == 11)
	{
		Months = "Nofember";
	}

	else if (Months_Input == 12)
	{
		Months = "December";
	}

	else
	{
		cout << "Wrong Month";
	}

	cout << Months;
	return 0;

}