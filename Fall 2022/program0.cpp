//**************************************************
// Program 1 - The Welcome Program
// Author: [Junyeong Shin]
// Date: Thursday, 24-August, 2017
//
// This program asks the user their name, greets them by name,
// and welcomes them to CS142
//**************************************************
gbump
  string enteredFirstName = "";
  string enteredLastName = "";
  int enteredAge = 0;
  int currentyear = 0;
  int groupIn = 0;
  
  cout << "What is your first name? ";
  cin >> enteredFirstName;
  cout << "What is your :LAST name? ";
  cin >> enteredLastName;
  cout << "Hello " <<enteredLastName << ", " << enteredFirstName << "."  << endl; 
  cout << "Welcome to CS142, the greatest class ever!!!" << endl;
  
  cout << "Please enter your age in years : ";
  cin >> enteredAge;
  cout<<endl;

  int year65= (65- enteredAge) + currentyear; 
  cout << " What is the current year? ";
  cin >> currentyear;
    int yearbornin = currentyear-enteredAge;
   int agein2025 = (2025 - currentyear) + enteredAge;
  cout << "You are " << enteredAge << " years old." << endl;
  cout << " Your age is " <<agein2025 << "in the year 2025" << endl;
  cout << " You are born in" << yearbornin << endl;
  groupIn = enteredAge % 4;
  cout << "You are in Group" << groupIn << endl;
  
  if (enteredAge == 16)
  {
	  cout<< "You can get a driver's license" <<endl;
  }
if (enteredAge >= 21)
{
	cout<< "You are old enough to drink"<< endl;
}
	else
	{
		cout << "(21-enteredAge) years left" << endl;
	}
	if (enteredAge >= 65)
	{
		cout<< "you qualify for Medicare"<<endl;
	}
 
  return 0;
}

