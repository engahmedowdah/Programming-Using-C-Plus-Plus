#include <iostream>
using namespace std;

void SwapTwoNumbers()
{
	int Num1, Num2, Swap;
	cout << "Please enter your first number:\n";
	cin >> Num1;
	cout << "Please enter your second number:\n";
	cin >> Num2;

	cout << "\nBefore replacement:\n";
	cout << "********************************\n";
	cout << "First Number: " << Num1 << "\n";
	cout << "Second Number: " << Num2 << "\n";
	cout << "********************************";
	cout << "\n\n";

	Swap = Num1;
	Num1 = Num2;
	Num2 = Swap;
	cout << "\nAfter replacement:\n";
	cout << "********************************\n";
	cout << "First Number: " << Num1 << "\n";
	cout << "Second Number: " << Num2 << "\n";
	cout << "********************************";
	cout << "\n\n";
}

int main()
{
	SwapTwoNumbers();
	return 0;

}