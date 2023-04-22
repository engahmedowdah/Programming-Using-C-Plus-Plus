#include <iostream>
using namespace std;
int main()
{
	unsigned short A, B;
	cout << "Please enter value for side A:\n";
	cin >> A;
	cout << "Please enter value for side B:\n";
	cin >> B;

	cout << "\n\n";
	int Area = A * B;
	cout << "Area: " << Area << endl;

	return 0;
}