/* 
Author: Junyeong Shin
Date: 10/18/22
Description: assignment 4 cs 142
*/
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main()
{
    string wholeLine = "";

    cout << "please type in a whole setence : " <<endl;
    getline(cin, wholeLine);

    cout<< "The line entered is 1: '"<< wholeLine << "'"<<endl;
    cout << "number of characters = " << wholeLine.length() << endl;

    cout << "first char=" << wholeLine[0] <<endl;
    cout << "last char=" << wholeLine[wholeLine.length() - 1 ] << endl;
    return 0;
}