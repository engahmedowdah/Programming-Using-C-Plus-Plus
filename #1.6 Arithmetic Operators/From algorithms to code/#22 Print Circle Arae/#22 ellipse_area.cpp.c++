#include <iostream>
using namespace std;
int main()
{
	unsigned short int A, B;
	cout << "Please enter value for side A:\n";
	cin >> A;
	cout << "Please enter value for side B:\n";
	cin >> B;

	const float PI = 3.14;

	cout << "\n\n";
	float Area = (PI * B * B / 4) * ((2 * A - B) / (2 * A + B));
	cout << "Area: " << Area << endl;

	return 0;
}