
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

const int NUMBEROFSTUDENTS  = 25;

 //void readGradesfromFile(int studentgrades[], int & countOfStudents)
//{
	//ifstream inputFile;
	//inputFileStream.open("grades.txt");
		//inputFilestream >> studentgrades[0];
		//inputFilestream >> studentgrades[1];
		//inputFilestream >> studentgrades[2];
		//inputFilestream >> studentgrades[3];
		//inputFilestream >> studentgrades[4];
		//inputFilestream >> studentgrades[5];
		//inputFilestream >> studentgrades[6];
		//inputFilestream >> studentgrades[7];
		//inputFilestream >> studentgrades[8];
		//inputFilestream >> studentgrades[9];
		//countOfStudents = 10;

	//inputFileStream.close();
//}
void GetGradesOfStudents(float studentsGrades[], int & countOfStudents)
{
	float enteredGrade = 0.0;
		
	while(( enteredGrade >= 0.0  )&& (countOfStudents < NUMBEROFSTUDENTS) )
	{
		cout << "enter students grade or -1 to exit = ";
		cin >> enteredGrade; 
		
		if( (enteredGrade >= 0.0)  )
		{	
			studentsGrades[ countOfStudents ] = enteredGrade;
			countOfStudents ++;
		}
	}
}


float CalculateAvgGrade(float arrayOfValues[], int sizeOfArray)
{
	float sumOfStudentsGrades = 0.0;
	float avgGrade = 0.0;

	for(int loopVariable = 0;  loopVariable  < sizeOfArray; loopVariable++)
	{
		sumOfStudentsGrades = sumOfStudentsGrades + arrayOfValues[loopVariable] ;		
	}	
	
	avgGrade = sumOfStudentsGrades/sizeOfArray;
	
	return avgGrade;
}		
		
float FindHighestGrade(float arrayOfValues[], int sizeOfArray)
{
	float highestGrade = 0.0;
		
	for(int loopVariable = 0;  loopVariable  < sizeOfArray; loopVariable++)
	{
		// Find Highest grade
		if(arrayOfValues[loopVariable]  > highestGrade)
		{
			highestGrade = arrayOfValues[loopVariable];
		}
	}
			
	return highestGrade;
}

float FindLowestGrade(float arrayOfValues[], int sizeOfArray)
{
	float lowestGrade = 200.0;
		
	for(int loopVariable = 0;  loopVariable  < sizeOfArray; loopVariable++)
	{
		// Find Lowest grade
		if(arrayOfValues[loopVariable]  < lowestGrade)
		{
			lowestGrade = arrayOfValues[loopVariable];
		}
	}
			
	return lowestGrade;
}


void CountOfLetterGrades(float arrayOfValues[], int sizeOfArray, int arrayOfLetterGradeCounts[])
{

	for(int loopVariable = 0;  loopVariable  < sizeOfArray; loopVariable++)
	{	
		// count As
		if(arrayOfValues[loopVariable] >= 90)
		{
			arrayOfLetterGradeCounts[0] ++;
		}
		else if(arrayOfValues[loopVariable] >= 80)
		{
			arrayOfLetterGradeCounts[1] ++;
		}		
		else if(arrayOfValues[loopVariable] >= 70)
		{
			arrayOfLetterGradeCounts[2] ++;
		}	
		else if(arrayOfValues[loopVariable] >= 60)
		{
			arrayOfLetterGradeCounts[3] ++;
		}		
		else 
		{
			arrayOfLetterGradeCounts[4] ++;
		}	
	}

}

void PrintValues(float highestGrade,float lowestGrade, float avgGrade, int arrayOfLetterGradeCounts[])
{
	
	cout << "Average Grade  = " << fixed << setprecision(3) << avgGrade << endl;
	cout << "Highest Grade = " << fixed << setprecision(3) << highestGrade << endl;
	cout << "Lowest Grade = " << fixed << setprecision(3) << lowestGrade << endl;
	cout << "Number of As = " << arrayOfLetterGradeCounts[0] << endl;
	cout << "Number of Bs = " << arrayOfLetterGradeCounts[1] << endl;
	cout << "Number of Cs = " << arrayOfLetterGradeCounts[2] << endl;
	cout << "Number of Ds = " << arrayOfLetterGradeCounts[3] << endl;	
	cout << "Number of Fs = " << arrayOfLetterGradeCounts[4] << endl;	
}

void PrintIndividualGrades(float arrayOfValues[], int sizeOfArray)
{
	for(int loopVariable = 0;  loopVariable  < sizeOfArray; loopVariable++)
	{
		cout << "Student[" << loopVariable << "]= " << arrayOfValues[loopVariable] <<  endl;
		
	}	
}

int main()
{
	float studnetsGrades[NUMBEROFSTUDENTS] ;
	int countOfStudents = 0;
	float avgGrade = 0.0;
	float highestGrade = 0.0;
	float lowestGrade = 0.0;	
	int arrayOfLetterGradeCounts[5] = {0,0,0,0,0};

	GetGradesOfStudents(studnetsGrades, countOfStudents);
	
	if( countOfStudents <= NUMBEROFSTUDENTS)
	{
		highestGrade = FindHighestGrade(studnetsGrades, countOfStudents);
		lowestGrade = FindLowestGrade(studnetsGrades, countOfStudents);		
		CountOfLetterGrades(studnetsGrades, countOfStudents, arrayOfLetterGradeCounts);	
		avgGrade = CalculateAvgGrade(studnetsGrades, countOfStudents);	
		
		PrintValues(highestGrade,lowestGrade, avgGrade, arrayOfLetterGradeCounts);
		
		PrintIndividualGrades(studnetsGrades,  countOfStudents);
	}
	else
	{
		cout << "You have too many students in your class to use this program " << endl;
	}
	
	return 0;
}