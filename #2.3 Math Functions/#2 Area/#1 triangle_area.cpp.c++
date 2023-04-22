#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int A, D;
	cout << "Please enter first number A:\n";
	cin >> A;
	cout << "Please entre your second number D:\n";
	cin >> D;

	float Area = A * sqrt(D * D - (A * A));
	cout << "Area: " << Area << endl;
	return 0;
}