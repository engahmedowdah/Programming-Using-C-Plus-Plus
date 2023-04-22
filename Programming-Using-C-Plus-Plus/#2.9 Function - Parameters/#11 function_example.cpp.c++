#include <iostream>
#include <cmath>
using namespace std;

void ReadSides(float& A, float& B, float& C)
{
    cout << "Please enter value of A:\n";
    cin >> A;
    cout << "Please enter value of B:\n";
    cin >> B;
    cout << "Please enter value of C:\n";
    cin >> C;
}

float AreaCalculation(float A, float B, float C)
{
    const float PI = 3.14;
    float P = (A + B + C) / 2;
    float area = sqrt(P * (P - A) * (P - B) * (P - C));
    float t = (A * B * C) / (4 * area);
    float Area = PI * pow(t, 2);
    return Area;
}

void PrintArea(float area)
{
    cout << "Area is: " << area << " square units";
}

int main()
{
    float A, B, C;
    ReadSides(A, B, C);
    float Area = AreaCalculation(A, B, C);
    PrintArea(Area);
    cout << endl;
    return 0;
}