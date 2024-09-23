/* 
Author: Junyeong Shin
Date: 10/18/22
Description: assignment 4 cs 142
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;
const int candyTypes = 6;

void Getmenu(string buttoncommand)
{
    {
        cout << " E - Eat a piece of candy  " << endl;
        cout << " T - Trick or Treat: get a piece of candy " << endl;
        cout << " I - Inventory listing " << endl;
        cout << " C - List candy types " << endl;
        cout << " M - Print this menu of commands " << endl;
        cout << " S - Save to the file candy.dat " << endl;
        cout << " L - Load from the file candy.dat " << endl;
        cout << " Q - Quit this program " << endl;
            
    }

}

void Getlist(string buttoncommand)
{   
    cout<<" 1 Candy Corn "<<endl;
    cout<<" 2 Licorice "<<endl;
    cout<<" 3 Jaw Breakers " <<endl;
    cout<<" 4 Peanutbutter Cups " <<endl;
    cout<<" 5 M&Ms "<<endl;
    cout<<" 6 Other " <<endl;

}
void TrickOTreat(int candyArray[],int & totalCandy)
{
    int enterCandy = 0;
    
    while(( enterCandy >=0))
	{
        
		cout << "enter type of candy recieved (1-6) or -1 to exit = ";
		cin >> enterCandy; 
		if (enterCandy == 1) 
        {
            candyArray[0]++;
            totalCandy ++;
        }
        else if (enterCandy == 2)
        {
            candyArray[1]++;
            totalCandy ++;
        }
        else if (enterCandy == 3)
        {
            candyArray[2]++;
            totalCandy ++;
        }
        else if (enterCandy == 4)
        {
            candyArray[3]++;
            totalCandy ++;
        }
        else if (enterCandy == 5)
        {
            candyArray[4]++;
            totalCandy ++;
        }
        else if (enterCandy == 6)
        {
            candyArray[5]++;
            totalCandy ++;
        }
        else if (enterCandy >6)
        {
            cout<< " That is not a candy type" << endl;
        }
    }
}
void Eaten(int candyArray[], int & totalCandy)
{
    int enterCandy = 0;
    
    while(( enterCandy >=0))
	{
		cout << "enter type of candy eaten (1-6)or -1 to exit = ";
		cin >> enterCandy; 
		if (enterCandy == 1)
        {
            candyArray[0]--;
            totalCandy --;
        }
        else if (enterCandy == 2)
        {
            candyArray[1]--;
            totalCandy --;
        }
        else if (enterCandy == 3)
        {
            candyArray[2]--;
            totalCandy --;
        }
        else if (enterCandy == 4)
        {
            candyArray[3]--;
            totalCandy --;
        }
        else if (enterCandy == 5)
        {
            candyArray[4]--;
            totalCandy --;
        }
        else if (enterCandy == 6)
        {
            candyArray[5]--;
            totalCandy --;
        }
        else if (enterCandy >6)
        {
            cout<< " That is not a candy type you can eat" << endl;
        }
    }
}
void GetInventory(int candyArray[], int & totalCandy)
{
    cout<<" 1 Candy Corn = "<< candyArray[0] <<endl;
    cout<<" 2 Licorice = "<< candyArray[1]<<endl;
    cout<<" 3 Jaw Breakers = " << candyArray[2]<<endl;
    cout<<" 4 Peanutbutter Cups = "<< candyArray[3] <<endl;
    cout<<" 5 M&Ms = "<< candyArray[4]<<endl;
    cout<<" 6 Other = "<< candyArray[5] <<endl;
    cout << "Total amount of candy is " << totalCandy <<endl;
}
void Save(int candyArray[],int candyCount)
{
    float nextvalue;
    
    ofstream outputFileStream;
   
    outputFileStream.open ("candy.dat");
    
    outputFileStream << candyArray[0] << endl;
    outputFileStream << candyArray[1] << endl;
    outputFileStream << candyArray[2] << endl;
    outputFileStream << candyArray[3] << endl;
    outputFileStream << candyArray[4] << endl;
    outputFileStream << candyArray[5] << endl;
    outputFileStream << candyCount << endl;

    outputFileStream.close();
    
}
void Load(int candyArray[],int candyCount)
{
    ifstream inputFileStream;
    inputFileStream.open("candy.dat");

    inputFileStream >> candyArray[0];
    inputFileStream >> candyArray[1];
    inputFileStream >> candyArray[2];
    inputFileStream >> candyArray[3];
    inputFileStream >> candyArray[4];
    inputFileStream >> candyArray[5];
    inputFileStream >> candyCount; 

    inputFileStream.close();

}
int main ()
{
    string button ="";
    int candyArray[candyTypes];
    int candyCount = 0;
        
   
    cout <<" Welcome to the Candy database program!" <<endl;
    cout<< " Here is a list of commands: " << endl;
    cout << " E - Eat a piece of candy  " << endl;
    cout << " T - Trick or Treat: get a piece of candy " << endl;
    cout << " I - Inventory listing " << endl;
    cout << " C - List candy types " << endl;
    cout << " M - Print this menu of commands " << endl;
    cout << " S - Save to the file candy.dat " << endl;
    cout << " L - Load from the file candy.dat " << endl;
    cout << " Q - Quit this program " << endl;
    while (button != "Q")
    {
        cout << " Type in any command" << endl;
        cin >> button;
        if (button != "Q")
        {
            numberofCommand ++; 
        }
        if (button == "M")
        {
            Getmenu(button);
        }
        if (button == "C")
        {
            Getlist(button);
        }
        if (button == "I")
        {
           GetInventory(candyArray,candyCount);
        }
        if(button == "E")
        {
            Eaten(candyArray,candyCount);
        }
        if(button == "T")
        {
            TrickOTreat(candyArray,candyCount);
        }
        if(button == "S")
        {
            Save(candyArray,candyCount);
        }
        if(button == "L")
        {
            Load(candyArray,candyCount);
        }   
 }   
return 0;
}
