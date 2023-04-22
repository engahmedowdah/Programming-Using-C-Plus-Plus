#include <iostream>
using namespace std;
void AskUser(int& A, int& B)
{
    cout << "Enter the value for side A:\n";
    cin >> A;
    cout << "Enter the value for side B:\n";
    cin >> B;
}

int AreaCalculation(int A, int B)
{
    return A * B;
}

int PrintArea()
{
    int A, B;
    AskUser(A, B);
    int Area = AreaCalculation(A, B);
    cout << Area << endl;
    return Area;
}

int main()
{
    PrintArea();
    return 0;
}