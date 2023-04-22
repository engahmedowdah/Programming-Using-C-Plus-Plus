#include <iostream>
#include <cmath>
using namespace std;

void AskUser(int &A)
{
	cout << "Please enter value A:\n";
	cin >> A;
}

float AreaCalculation(float A)
{
	const float PI = 3.14;
	float Area = PI * pow(A, 2) / 4;
	return Area;
}

void PrintArea(float Area)
{
	cout << "Area is: " << Area;
}

int main()
{
	int A;
	AskUser(A);
	float Area = AreaCalculation(A);
	PrintArea(Area);
	cout << "\n";
}