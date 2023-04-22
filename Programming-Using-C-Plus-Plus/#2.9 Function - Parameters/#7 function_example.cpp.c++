#include <iostream>
#include <cmath>
using namespace std;

void AskUser(int &D)
{
	cout << "Please enter value D:\n";
	cin >> D;
}

float AreaCalculation(float D)
{
	const float PI = 3.14;
	float Area = PI * pow(D, 2) / 4;
	return Area;
}

void PrintArea(float Area)
{
	cout << "Area is: " << Area;
}

int main()
{
	int D;
	AskUser(D);
	float Area = AreaCalculation(D);
	cout << Area << endl;
	return Area;
}