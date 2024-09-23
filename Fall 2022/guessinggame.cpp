/*
Author: Junyeong Shin
Date: 9-24-22
Description: Assignment 3 Guessing game HW
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <time.h>
using namespace std;
string AnynumberFunction( int guess, int number)
{
	string result = "";
		
		if ( guess < number)
		{
		result = " Your guess is too low! ";
		}
		else if (guess > number)
		{
		result = " Your guess is too high! ";
		}
		else if ( guess == number)
		{	
		result = " You guess is correct " ;
		}
	
return result;
}

int main()
{
	int numberofguess = 0;
	int number = 0;
	int guess = 0;
	string answer = "";
	
	cout << " Welcome to the GUESSING GAME " << endl;
	cout << " I have a number between 1 and 100. Can you Guess it?" << endl;
	while  (guess != -1)
		{
	srand(time(NULL));
	number = rand()%100+1;

	while  ( guess != number)
	{ 
	cout << " make a guess " << endl;
	cin >> guess;
	numberofguess++;
	cout<< AnynumberFunction( guess, number)<< endl;
	}
	cout<< " Play again if not press ctrl+c " << endl;
	}

return 0;
}