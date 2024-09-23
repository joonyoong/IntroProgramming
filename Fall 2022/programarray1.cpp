#include<iostream>
#include<iomanip>
using namespace std;
const int numberOfStudents =10;

int main()
{
    float studentsGrades[numberOfStudents];
    float sumOfstudentsGrades = 0.0;
    float avgOfstudentsGrades = 0.0;
    float highestgrade =0.0;
    float lowestgrade = 200.0;
    int countsOfAs = 0;
    int countsOfBs = 0;
    int countsOfCs = 0;
    int countsOfDs = 0;
    int countsOfFs = 0;

    for (int loopVariable = 0; loopVariable < numberOfStudents ; loopVariable++)
    {
        cout<< "Enter student's grade ["<<loopVariable<<"] ="<<endl;
        cin >> studentsGrades[loopVariable];
    }
    for (int loopVariable = 0; loopVariable < numberOfStudents ; loopVariable++)
    {
    cout<< "students["<<loopVariable<<"]= "<< studentsGrades[loopVariable] <<endl;
    sumOfstudentsGrades = sumOfstudentsGrades + studentsGrades[loopVariable];
    //Find highest grade
    if (studentsGrades[loopVariable] > highestgrade)
    {    highestgrade = studentsGrades[loopVariable];
    }
    //Find lowest grade
    if (studentsGrades[loopVariable] < lowestgrade)
    {    lowestgrade = studentsGrades[loopVariable];
    }
    // count As
    if(studentsGrades[loopVariable] >= 90)
    {
        countsOfAs++;
    }
    // count Bs
    else if (studentsGrades[loopVariable] >= 80)
    {
        countsOfBs++;
    }
    // count Cs
     else if (studentsGrades[loopVariable] >= 70)
    {
        countsOfCs++;
    }
    // count Ds
     else if (studentsGrades[loopVariable] >= 60)
    {
        countsOfDs++;
    }
    // count Fs
     else 
    {
        countsOfFs++;
    }
    }
    avgOfstudentsGrades = sumOfstudentsGrades/numberOfStudents;
    cout << "average grade =" << fixed << setprecision(3)<< avgOfstudentsGrades << endl;
    cout << "highest grade =" << fixed << setprecision(3)<< highestgrade << endl;
    cout << "lowest grade =" << fixed << setprecision(3)<< lowestgrade << endl;
    cout << "Total number of As " << countsOfAs << endl;
    cout << "Total number of Bs " << countsOfBs << endl;
    cout << "Total number of Cs " << countsOfCs << endl;
    cout << "Total number of Ds " << countsOfDs << endl;
    cout << "Total number of Fs " << countsOfFs << endl;
return 0;
}
