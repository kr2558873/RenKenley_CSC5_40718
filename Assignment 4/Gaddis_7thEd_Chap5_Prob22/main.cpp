/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 5:41 PM
 *      Purpose: Homework
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare a variable
    int widHght;
    //Prompt for the input
    cout<<"How large do you want the character square"<<endl;
    cin>>widHght;
    //Output
    cout<<endl;
    for(int row=1;row<=widHght;row++){
        for(int col=1;col<=2*widHght;col++){
            cout<<"X";
        }
        cout<<endl;
    }
    cout<<endl;
    //Exit stage right
    return 0;
}