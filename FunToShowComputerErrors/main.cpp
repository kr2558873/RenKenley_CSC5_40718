/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 8, 2015, 8:35 PM
 * Purpose: Fun Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare
    float smValue=0.1f,sum=0;
    int nTimes=1e7;
    //Sum the smVale a million times
    for(int i=1;i<=nTimes;i++) {
        sum+smValue;
    }
    int multiply=nTimes*smValue;
    //Output the result
    cout<<nTimes<<" * "<<smValue<<" = "<<sum<<endl;
    cout<<"The answer should be = "<<multiply<<endl;
    //Exit Stage Here!
    return 0;
}
