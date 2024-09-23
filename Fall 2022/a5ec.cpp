/* 
Author: Junyeong Shin
Date: 10/29/22
Description: assignment 5 cs 142
*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;
const int alphabetnumb = 26;

void getmenu(string button)
{
    cout << " Here is the list of Commands " << endl;
    cout << " Press M to get the list of Commands " << endl;
    cout << " Press E to encrypt the message " << endl;
    cout << " Press D to decrypt the message" << endl;
    cout << " Press L to load in the message to be encrypted or decrypted" <<endl;
    cout << " Press Q to Quit the program " << endl;
}
void encryptor(string & message, int encryptnumb)
{
    string ciphermsg;
    ciphermsg = message;

    for(int loopvariable = 0; loopvariable < ciphermsg.length() ;loopvariable ++)
    {
        
       if(((97 <= ciphermsg[loopvariable] ) 
                && (ciphermsg[loopvariable]  <= 122) ) 
                    || ((65 <= ciphermsg[loopvariable] ) 
                        && (ciphermsg[loopvariable]  <= 90) ))
                {
                    ciphermsg[loopvariable] = ciphermsg[loopvariable] + encryptnumb; 
                    if((122< ciphermsg[loopvariable] )  
                    || ((90<= ciphermsg[loopvariable] ) 
                        && (ciphermsg[loopvariable] <= 97) ))
                        {
                            ciphermsg[loopvariable] = ciphermsg[loopvariable] - alphabetnumb;
                        }
                }
    }
    cout << " The encrypted message : " << ciphermsg << endl;
}
void decryptor(string & message,int encryptnumb)
{ 
    string dciphermsg;
    dciphermsg = message;

     for(int loopvariable = 0; loopvariable < dciphermsg.length() ;loopvariable ++)
    {
        
       if(((97 <= dciphermsg[loopvariable] ) 
                && (dciphermsg[loopvariable]  <= 122) ) 
                    || ((65 <= dciphermsg[loopvariable] ) 
                        && (dciphermsg[loopvariable]  <= 90) ))
                {
                    dciphermsg[loopvariable] = dciphermsg[loopvariable] - encryptnumb; 
                    if(((65>dciphermsg[loopvariable] )  
                    || (((90<= dciphermsg[loopvariable] ) 
                        && (dciphermsg[loopvariable] <= 97) ))
                            && (122< dciphermsg[loopvariable] )))
                            
                        {
                            dciphermsg[loopvariable] = dciphermsg[loopvariable] - alphabetnumb;
                        }
                }
    }
    cout << " The decrypted message : " << dciphermsg << endl;
}
int main()
{
    string button ="";
    int numberofCommand = 0;
    int encryptnumb = 0;
    string message = "";
    
    cout << " Welcome to the encryptor and decryptor program! " << endl;
    cout << "Please enter your message you wish to encrypt/decrypt: " << endl;
    getline(cin , message);

    cout<< endl;
    cout << " Here is the list of Commands " << endl;
    cout << " Press M to get the list of Commands " << endl;
    cout << " Press E to encrypt the message " << endl;
    cout << " Press D to decrypt the message" << endl;
    cout << " Press L to load in the message to be encrypted or decrypted" <<endl;
    cout << " Press Q to Quit the program " << endl;

    while (button != "Q")
    {
        cout << " Type in a command" << endl;
        cin >> button;
        numberofCommand ++;
        if (button == "M")
        {
            getmenu(button);
        }
        else if (button == "E")
        {
            cout << "Please enter the number you want to encrypt the program by:  " << endl;
            cin >> encryptnumb;
            encryptor(message,encryptnumb);
        }
        else if (button == "D")
        {
            cout << "Please enter the number you want to decrypt the program by:  " << endl;
            cin >> encryptnumb;
            decryptor(message,encryptnumb);
        }
        else if (button == "L")
        {
           //loadingin(button)
        }
        else if (button == "Q")
        {
            cout << "Thanks for using the program!  " << endl;
        }
    }
return 0;
}