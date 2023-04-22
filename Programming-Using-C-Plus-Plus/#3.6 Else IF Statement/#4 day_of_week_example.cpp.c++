#include <iostream>
using namespace std;
int main()
{
	char Day_Number;

	cout << "Enter is the day number:\n";
	cin >> Day_Number;

	if (Day_Number == '1')
	{
		cout << "Sunday";
	}

	else if (Day_Number == '2')
	{
		cout << "Monday";
	}

	else if (Day_Number == '3')
	{
		cout << "Tuesday";
	}

	else if (Day_Number == '4')
	{
		cout << "Wednesday";
	}

	else if (Day_Number == '5')
	{
		cout << "Thursday";
	}

	else if (Day_Number == '6')
	{
		cout << "Friday";
	}

	else if (Day_Number == '7')
	{
		cout << "Saturday";
	}

	else
	{
		cout << "Worng Day";
	}

	return 0;

}