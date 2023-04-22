#include <iostream>
using namespace std;
int main()
{
	float Number1, Number2, TotalNumbers;
	char OpType;
	cout << "Enter your first number:\n";
	cin >> Number1;

	cout << "Enter your second number:\n";
	cin >> Number2;

	cout << "Enter Operation Type:\n";
	cin >> OpType;

	if (OpType == '+')
	{
		TotalNumbers = Number1 + Number2;
	}

	else if (OpType == '-')
	{
		TotalNumbers = Number1 - Number2;
	}

	else if (OpType == '*')
	{
		TotalNumbers = Number1 * Number2;
	}

	else if (OpType == '/')
	{
		TotalNumbers = Number1 / Number2;
	}

	else
	{
		cout << "Worng Operation";
	}

	cout << "Total numbers: " << TotalNumbers;
	return 0;
}