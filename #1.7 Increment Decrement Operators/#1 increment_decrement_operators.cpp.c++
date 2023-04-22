#include <iostream>
using namespace std;
int main()
{
	short A=0, B=0;
	//It makes no difference if it is in this form

	++A;

	B++;
	
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	//It makes no difference if it is in this form
	--A;

	B--;

	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	return 0;
}