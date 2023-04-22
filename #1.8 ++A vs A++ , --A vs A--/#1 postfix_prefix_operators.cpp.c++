#include <iostream>
using namespace std;
int main()
{
	int A = 10;
	int B = A++;

	cout << "A++ vs ++B" << "\n\n";
	cout << "B = " << B << "\n";
	cout << "A = " << A << "\n";

	B = ++A;
	cout << "B = " << B << "\n";
	cout << "A = " << A;
	
	cout << "\n" << "\n";

	cout << "______________________________\n";
	cout << "A++ vs ++B" << "\n\n";

	int C = 10;
	int D = C --;
	
	cout << "D = " << D << "\n";
	cout << "C = " << C << "\n";

	D = --C;

	cout << "D = " << D << "\n";
	cout << "C = " << C << endl;
	return 0;
}