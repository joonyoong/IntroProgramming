/*
Author: Junyeong Shin
Date: 9-19-22
Description: For loop demo
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int ageofstudent = 0;
	int incomeofstudent = 0;
	int sumofages = 0;
	float averageageofstudent = 0;
	int numberofsample= 8;
	
	for (int loopvariable = 0, loopvariable < numberofsample; loopvariable++)
	{
			cout << " please enter your age" << endl;
			cin >> ageofstudent>> endl;
			sumofages = sumofages+ ageofstudent;
			
	}
	averageageofstudent = (float)sumofages/(float)numberofsample;
	cout << " Average age of students is " << averageageofstudent << endl;
	return 0;
}
	