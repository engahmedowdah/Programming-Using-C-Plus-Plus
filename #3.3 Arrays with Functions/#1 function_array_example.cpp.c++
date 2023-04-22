#include <iostream>
using namespace std;

void ReadGrades(float GradeOfStudents[3]) //Read Array of Grades.
{
	cout << "Please enter your first Grade:\n";
	cin >> GradeOfStudents[0];
	cout << "Please enter your second Grade:\n";
	cin >> GradeOfStudents[1];
	cout << "Please enter your third Grade:\n";
	cin >> GradeOfStudents[2];
}

float AvgGrades(float GradeOfStudents[3]) //Print Array of Grades.
{
	float AvgStudentsGrades = (GradeOfStudents[0] + GradeOfStudents[1] + GradeOfStudents[2]) / 3;
	return AvgStudentsGrades;
}

int main()
{
	float GradeOfStudents[3];
	ReadGrades(GradeOfStudents);
	cout << "The avreage of grades is " << AvgGrades(GradeOfStudents);
	cout << "\n";
	return 0;
}