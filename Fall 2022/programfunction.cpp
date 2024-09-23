/*
Author: Junyeong Shin
Date: 9-19-22
Description: For functions
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>touch
#include <tigme.h> 
using namespace std;
int main()
{
	int baseValue = 3;
	int exponentValue = -2;
	float resultValue = pow(baseValue, exponentValue);
	int absValue = abs(exponentValue);
	
	cout << "POW result = " <<fixed << setprecision(3) << resultValue << endl;
	cout << "ABS result = " <<absValue<< endl;
	cout << "CEIL result = " << ceil(resultValue) << endl;
	cout << "FLOOR result = " << floor(resultValue) << endl;
	int randomNumber = srand(10);
	cout << " Seeded Random Number 1 Reesult = " << randomNumber << endl;
 
 return 0;
}