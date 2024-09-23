// program 1
// Junyeong Shin	
// Wednesday September-7
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

double enteredDegreesFahren = 55677.31349906445;
cout<< "Welcome to the UNWEDGE Weather Program" ;

cout << "Please enter the temperature in degrees Fahrenheit? ";
cin >> enteredDegreesFahren;

cout << "enteredDegreesFahren = " << fixed << setprecision(5) << enteredDegreesFahren << endl;
 double centigrade = (5.0/9.0)*(enteredDegreesFahren-32.0);
cout << "It is " << centigrade << ", " << "Have a nice day!" << endl;
if (enteredDegreesFahren>85)
{
		cout<< "It is Hot" << endl;
}
if (enteredDegreesFahren<20)
{
		cout<< "It is Cold" << endl;
}
return 0;
}