#include <iostream>
using namespace std;
int main()
{
	unsigned short A;
	cout << "Please enter value for side A:\n";
	cin >> A;

	const float PI = 3.14;

	cout << "\n\n";
	float Area = (PI * (A * A)) / 4;
	cout << "Area: " << Area << endl;

	return 0;
}