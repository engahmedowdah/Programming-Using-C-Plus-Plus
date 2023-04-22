#include <iostream>
#include <cmath>
using namespace std;

void ReadNumber(float &Num1)
{
    cout << "Please enter your number:\n";
    cin >> Num1;
}

void AreaCalculation(float Num1, float &Power2, float &Power3, float &Power4)
{
    Power2 = Num1 * Num1;
    Power3 = Num1 * Num1 * Num1;
    Power4 = Num1 * Num1 * Num1 * Num1;
}

void Power(float Power2, float Power3, float Power4)
{
    cout << "Power 2 is: " << Power2 << "\n";
    cout << "Power 3 is: " << Power3 << "\n";
    cout << "Power 4 is: " << Power4 << "\n";
}

int main()
{
    float Number, Power2, Power3, Power4;
    ReadNumber(Number);
    AreaCalculation(Number, Power2, Power3, Power4);
    Power(Power2, Power3, Power4);
    return 0;
}