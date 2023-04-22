#include <iostream>
using namespace std;
int main()
{
	unsigned short A, h;
	cout << "Please enter value for side A:\n";
	cin >> A;
	cout << "Please enter value for side H:\n";
	cin >> h;

	cout << "\n\n";

	int Area = A / 2 * h;
	cout << "Area = " << Area << endl;
	return 0;
}