/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 3:14 PM
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    char i = 0;
    char j = 0;
    //Input
    for(int i=0;i<=127; )
    {
    for(int j=1;j<=16;j++,i++)
    {
    cout<<(char)i;
    }
    cout<<endl;
}

    return 0;
}