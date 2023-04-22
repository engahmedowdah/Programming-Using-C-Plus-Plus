#include <iostream>
using namespace std;
int main()
{
	float Num1, Num2, Temp;
	cout << "Please enter your first grade:\n";
	cin >> Num1;
	cout << "Please enter your second grade:\n";
	cin >> Num2;

	cout << "\n\n";

	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;

	cout << "Number 1: " << Num1 << endl;
	cout << "Number 2: " << Num2 << endl;

	return 0;
}