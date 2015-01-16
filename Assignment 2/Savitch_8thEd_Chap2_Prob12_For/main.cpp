/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 15, 2015, 5:55 PM
 * Purpose: Babylonian Square root calculator
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float number,guess,r=0;
    //Input a number
    cout<<"Input a number to estimate its square root"<<endl;
    cout<<"The format fill be a positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    for(int count=1;(r-guess)!=0;count++){
    r=number/guess;
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"Loop"<<count<<" calculate -> "<<guess<<endl;
}
    //Exit stage right
    return 0;
}