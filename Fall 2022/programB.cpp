/*
Author: Junyeong Shin
Date: 9/14/22
File Name: programB.cpp
Description: This C++ program demonstrates a simple while loop
*/ 

#include <iostream> // 
using namespace std;

int main ()
{

int counter = 1 ; // initialize the loop counter
while ( counter <4) // this is the loop condition
{
	// the loop body
		cout << "counter = " << counter << "\nhello"<< endl; // do something, \t adds a tab while \n goes to new line
		counter++; // increment the loop counter by 1
}
return 0;
}