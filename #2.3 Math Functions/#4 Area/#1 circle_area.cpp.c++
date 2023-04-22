#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int D;
	cout << "Please enter number D:\n";
	cin >> D;
	const float PI = 3.14;
	float Area = (PI * pow(D, 2)) / 4;
	cout << "Area: " << ceil(Area) << endl;
	return 0;
}