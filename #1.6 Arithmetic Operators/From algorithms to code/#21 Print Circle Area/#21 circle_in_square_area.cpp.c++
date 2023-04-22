#include <iostream>
using namespace std;
int main()
{
	int L;
	cout << "Please enter value for side L:\n";
	cin >> L;

	const float PI = 3.14;

	cout << "\n\n";
	float Area = (L * L) / (4 * PI);
	cout << "Area: " << Area << endl;

	return 0;
}