#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int A;
	cout << "Please enter number D:\n";
	cin >> A;
	const float PI = 3.14;
	float Area = (PI * pow(A, 2)) / 4;
	cout << "Area: " << ceil(Area) << endl;
	return 0;
}