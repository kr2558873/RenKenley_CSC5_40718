/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 3:13 PM
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
    unsigned int salary=1;//Integer number of pennies
    unsigned int totP=salary;//Total pay after n days
    unsigned short numDays;//Number of days to double
    //Input
    cout<<"How many days to double your salary?"<<endl;
    cout<<"Your salary starts with $0.01"<<endl;
    cout<<"Maximum days allowed = 30"<<endl;
    cin>>numDays;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"On the first day ";
    cout<<" your salary =  $"<<setw(11)<<salary/100.0f<<endl;
    //Calculate the result
    for(int day=2;day<=numDays;day++){
        salary<<=1;
        totP+=salary;
        cout<<"After "<<setw(2)<<day<<" days ";
        cout<<" your salary =     $"<<setw(11)<<salary/100.0f<<endl;
    }
    //Output the result
    cout<<"After "<<setw(2)<<numDays<<" days ";
    cout<<" your total pay =  $"<<setw(11)<<totP/100.0f<<endl;
    //Exit stage right
    return 0;
}