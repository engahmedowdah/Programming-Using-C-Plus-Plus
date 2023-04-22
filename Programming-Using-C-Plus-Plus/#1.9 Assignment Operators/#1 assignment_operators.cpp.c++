#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cout << "Please enter value of A:\n";
	cin >> A;
	cout << "Please enter valua of B:\n";
	cin >> B;

	cout << "---------------------\n";

	A += B; // A = A + B
	cout << "A = " << A << "\n";

	cout << "---------------------\n";

	A -= B; // A = A - B
	cout << "A = " << A << "\n";

	cout << "---------------------\n";

	A *= B; // A = A * B
	cout << "A = " << A << "\n";

	cout << "---------------------\n";

	A /= B; // A = A / B
	cout << "A = " << A << "\n";

	cout << "---------------------\n";

	A %= B; // A = A % B
	cout << "A = " << A << endl;

	return 0;
}