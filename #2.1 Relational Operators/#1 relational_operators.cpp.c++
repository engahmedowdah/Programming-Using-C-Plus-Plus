#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cout << "Please enter your first number A?\n";
	cin >> A;
	cout << "Please enter your second number B?\n";
	cin >> B;

	cout << "\n";
	
	cout << A << " = " << B << " is " << (A == B) << "\n";
	cout << A << " != " << B << " is " << (A != B) << "\n";
	cout << A << " > " << B << " is " << (A > B) << "\n";
	cout << A << " < " << B << " is " << (A < B) << "\n";
	cout << A << " >= " << B << " is " << (A >= B) << "\n";
	cout << A << " <= " << B << " is " << (A <= B) << "\n";

	return 0;
}