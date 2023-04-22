#include <iostream>
#include <cmath>
using namespace std;

void AskUser(int& L)
{
	int L;
	cout << "Please enter value L:\n";
	cin >> L;
}

float AreaCalculation(int L)
{
	const float PI = 3.14;
	float Area = pow(L, 2) / 4 * PI;
	return Area;
}

void PrintArea(float Area)
{
	cout << "Area is: " << Area;
}

int main()
{
	int L;
	AskUser(L);
	float Area = AreaCalculation(L);
	cout << Area << endl;

}