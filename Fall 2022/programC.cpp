/* 
Author: Junyeong Shin
Date: 9/14/22
Description: while loop demo
*/
#include <iostream> // 
#include <iomanip>
using namespace std;
int main ()
{
int enteredAge = 0;
int numberOfStudents = 0;
int sumOfStudentAges = 0;
float averageAgeOfStudents;
while( enteredAge != -1 )
{
	cout << "Enter in student's age or -1 to exit ::" << endl;
	cin >> enteredAge ;
	if(enteredAge >-1)
	{
		sumOfStudentAges = sumOfStudentAges + enteredAge;
		numberOfStudents++;
	}
}
	cout << sumOfStudentAges << endl;
	cout << numberOfStudents << endl;
	averageAgeOfStudents = (float)sumOfStudentAges/ (float)numberOfStudents;
	cout << " You have entered " << numberOfStudents << " students in total" << endl;
	cout << " the total sum of age was " << sumOfStudentAges << " students" << endl;
	cout << "Average student age is " << fixed << setprecision (3) << averageAgeOfStudents << endl;
}