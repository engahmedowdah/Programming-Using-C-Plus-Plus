#include <iostream>
using namespace std;
int main()
{
	float Num1, Num2;
	cout << "Please enter your first number:\n";
	cin >> Num1;
	cout << "Please enter your second number:\n";
	cin >> Num2;

	cout << "\n\n";

	float SumNums = Num1 + Num2;
	cout << "Total: " << SumNums << endl;

	return 0;
}