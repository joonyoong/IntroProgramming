//programA
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int enteredgrade = 0 
	string letterGrade = '';
	 
	cout<< "What is the grade = " ;
	cin << enteredgrade;
	
	if(enteredgrade >= 97)
	{
		cout<< " You Have an A+." << endl;
	}
	else if ( enteredgrade >=93)
		{
		cout<< " You Have an A." << endl;
	}
	else if ( enteredgrade >=90){
		cout<< " You Have an A-." << endl;
	}
	else if ( enteredgrade >=87){
		cout<< " You Have an B+." << endl;
	}
	else if ( enteredgrade >=83){
		cout<< " You Have an B." << endl;
	}
	else if ( enteredgrade >=80){
		cout<< " You Have an B-." << endl;
	}
	else if ( enteredgrade >=77){
		cout<< " You Have an C+." << endl;
	}
	else if ( enteredgrade >=73){
		cout<< " You Have an C." << endl;
	}
	else if ( enteredgrade >=70){
		cout<< " You Have an C-." << endl;
	}
	else if ( enteredgrade >=67){
		cout<< " You Have an D+." << endl;
	}
	else if ( enteredgrade >=63)
		{
		cout<< " You Have an D." << endl;
	}
	else if ( enteredgrade >=60)
		{
		cout<< " You Have an D-." << endl;
	}
	else 
	{
		cout<< " You Have a F" << endl;
	}
	return 0;
}