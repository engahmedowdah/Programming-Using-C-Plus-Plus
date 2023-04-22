#include <iostream>
#include <cmath>
using namespace std;

float Area()
{
	float a, d;
	cout << "Enter the value for side A:\n";
	cin >> a;
	cout << "Enter the value for side D:\n";
	cin >> d;

	float Area = a * sqrt(pow(d, 2) - pow(a, 2));
	cout << "Area: " << Area;
	return 0;
}

int main()
{
	Area();
	return 0;

}