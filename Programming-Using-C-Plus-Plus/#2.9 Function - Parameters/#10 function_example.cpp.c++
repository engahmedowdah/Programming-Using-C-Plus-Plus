#include <iostream>
#include <cmath>
using namespace std;

void Read_Sides(int &A, float& B)//Read sides A and B.
{
	cout << "Please enter value of A:\n";
	cin >> A;
	cout << "Please enter value of B:\n";
	cin >> B;
}

float AreaCalculation(int A, float B)
{
	const float PI = 3.14;
	float Area = PI * (pow(B, 2)) / 4 * ((2 * A - B) / (2 * A + B));
	return Area;
}

void PrintArea(float Area)
{
	cout << "Area is: " << Area ;
}

int main()
{
	int A;
	float B;
	Read_Sides(A, B);
	float Area = AreaCalculation(A, B);
	PrintArea(Area);
	cout << "\n";
	return 0;
}