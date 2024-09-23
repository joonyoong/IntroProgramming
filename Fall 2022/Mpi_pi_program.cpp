/*
Author: Junyeong Shin
Date: 12-7-22
Description: Calculating pi program
*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include "mpi.h"  // Message Passing Interface (MPI)
using namespace std;
const int MessageSize = 100;
int main(int argc, char * argv[])
{
int myRank;   // My CPU number for this program
int numCPUs; // Number of CPUs that we have
int sourceRank; // Rank of the sender
int destRank; // Rank of destination
int msgNum = 0; // Message Number
char msg[MessageSize]; // The Message itself  
MPI_Status status; // Return status for receive
// Start MPI
MPI_Init(&argc, &argv);
// Find out my rank!
MPI_Comm_rank(MPI_COMM_WORLD, &myRank);
// Find out the number of processess!
MPI_Comm_size(MPI_COMM_WORLD, &numCPUs);
// START PROGRAM//
double TopNum = 0.0;
double finalsum = 0.0;
double localsum=0.0;
if (myRank == 0)
cout << "Type in the number of terms you would like to calculate pi by" <<endl;
cin >> TopNum;
int localstart= myRank *(TopNum/numCPUs) + 1;
int localstop = (myRank+1)*(TopNum/numCPUs);
if ((TopNum- localstop) < (localstop - localstart +1))
    {
        localstop=TopNum;
    }

for(int loopVariable = localstart; loopVariable <= TopNum;  loopVariable++)

    {
        localsum = localsum + (1/(pow(loopVariable,2)));
    }

MPI_Allreduce(&localsum, &finalsum, 1, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD);
finalsum = sqrt(finalsum*6);
cout << myRank << "::The final sum is = " << fixed << setprecision(20) << finalsum << endl;

MPI_Finalize();
    return 0;
}