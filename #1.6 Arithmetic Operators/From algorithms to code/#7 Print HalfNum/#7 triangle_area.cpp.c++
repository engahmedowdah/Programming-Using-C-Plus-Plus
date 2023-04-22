#include <iostream>
using namespace std;
int main()
{
	float A, H ,Area;
	cout << "Please enter value for side A:\n";
	cin >> A;
	cout << "Please enter your second grade:\n";
	cin >> H;

	cout << "\n\n";
	Area = A/2 * H;
	cout << "Area: " << Area << endl;

	return 0;
}