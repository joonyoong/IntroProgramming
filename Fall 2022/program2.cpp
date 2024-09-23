/*
Author: Junyeong Shin
Date: 9-21-22
Description: Tuition bill program assignment
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int enteredCredit = 0;
	int numberofCredits = 0;
	int numberofcreditover20 = 0;
	int numberofcreditbelow12= 0;
	double sumofTotalBill = 55677.31349906445;
	cout << " Welcome to the Tuition Bill Program!" << endl;
	while (enteredCredit != -1)
	{
	cout << " Enter the amount Credits that you are taking or enter -1 to exit :: "<< endl;
	cin >> enteredCredit;
	if ( enteredCredit > -1)
	{
		cout << " Your total amount of credit is " <<  enteredCredit  << endl;
		enteredCredit= enteredCredit + numberofCredits;
		
	}
	if (enteredCredit >= 21)
	{ 
		numberofcreditover20= enteredCredit - 20;
		double sumofTotalBill= 18025.00+(1502.00 * numberofcreditover20);
				cout << "Your total is $" << fixed << setprecision(2) << sumofTotalBill << " dollars " << endl;
	}
	else if ( enteredCredit >= 12)
	{
			cout << " Your total is $" << " 18,025.00 " << " dollars " << endl;
	}
	else if ( enteredCredit >=0)
	{
		double numberofcreditbelow12 = enteredCredit * 1502.00;
		cout << "Your total is $" << fixed << setprecision(2) << numberofcreditbelow12 << " dollars " << endl;
	}
	}
	cout << " Pay the bill before the deadline as soon as possible " << endl;
	return 0;
}
		
		