#include <iostream>
using namespace std;
int main()
{
	unsigned float Grade1, Grade2, Grade3;
	cout << "Please enter your first grade:\n";
	cin >> Grade1;
	cout << "Please enter your second grade:\n";
	cin >> Grade2;
	cout << "Please enter your third grade:"
	cin >> Grade3;

	cout << "\n\n";

	float AvgGrades = (Grade1 + Grade2 + Grade3) / 3;
	cout << "Your average grades: " << AvgGrades << endl;

	return 0;
}