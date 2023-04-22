#include <iostream>
#include <cmath>
using namespace std;

void ReadArea(int &r)
{
	cout << "Please enter value of r:\n";
	cin >> r;
}

float AreaCalculation(int r)
{
	const float PI = 3.14;
	float Area =pow(r, 2) * PI;
	return Area;
}

void PrintArea(float Area)
{
	cout << Area << endl;
}

int main()
{
	int r;
	ReadArea(r);
	float Area = AreaCalculation(r);
	PrintArea(Area);
	return 0;
}