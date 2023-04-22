#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int A, B;
	cout << "Please enter your first nember:\n";
	cin >> A;
	cout << "Plaese enter your second number:\n";
	cin >> B;
	const float PI = 3.14;
	float Area = (PI * pow(B, 2)) / 4 * ((2 * A - B) / (2 * A + B));
	cout << "Area: " << floor(Area) << endl;
	return 0;
}