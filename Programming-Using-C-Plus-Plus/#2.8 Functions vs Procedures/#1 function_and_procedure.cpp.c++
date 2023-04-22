#include <iostream>
using namespace std;

void MySumProcedure()
{
	int Num1, Num2;
	cout << "Please enter your first number:\n";
	cin >> Num1;
	cout << "Please enter your second number:\n";
	cin >> Num2;
	cout << "***********************************\n";
	int SumOfNumbers = Num1 + Num2;
	cout << SumOfNumbers << "\n";

}

int MySumFunction()
{
	int Num1, Num2;
	cout << "Please enter your first number:\n";
	cin >> Num1;
	cout << "Please enter your second number:\n";
	cin >> Num2;
	cout << "***********************************";
	return Num1 + Num2;
    
}

int main()
{
	int SumNums;
	SumNums = MySumFunction();
	cout << "\n" << SumNums << "\n\n";

	MySumProcedure();

	return 0;

}