#include <iostream>
using namespace std;

int main()
{
	float Grade[3];//It's Array from Grades

	cout << "Please enter your First Grade:\n";
	cin >> Grade[0];

	cout << "Please enter your Second Grade\n";
	cin >> Grade[1];

	cout << "Plaese enter your Third Grade:\n";
	cin >> Grade[2];


	float AvgGrades = (Grade[0] + Grade[1] + Grade[2]) / 3;
	cout << "*******************************\n";
	cout << "The avreage of grades is: " << AvgGrades << "\n";
	return 0;
}