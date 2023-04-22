#include <iostream>
using namespace std;
int main()
{
	unsigned short HisGrade;
	cout << "Enter your grade:\n";
	cin >> HisGrade;

	string Message = "Your GPA is ";

	if (HisGrade >= 90)
	{
		cout << Message << "A";
	}

	else if (HisGrade >= 80)
	{
		cout << Message << "B";
	}

	else if (HisGrade >= 70)
	{
		cout << Message << "C";
	}

	else if (HisGrade >= 60)
	{
		cout << Message << "D";
	}

	else if (HisGrade >= 50)
	{
		cout << Message << "E";
	}

	else
	{
		cout << Message << "F";
	}

	return 0;
}