/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 8, 2015, 8:17 PM
 * Purpose: Homework Assignment 1
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float gasTank=20;//Max gallons in out gas tank
    float inTown=21.5;//In town mile per gallon
    float onHway=26.8;//Highway miles per gallon
    //Calculate the total miles in and out of town
    float disTown=gasTank*inTown;
    float disHway=gasTank*onHway;
    //Output the results
    cout<<"Distance in Town on a tank of gas      = ";
    cout<<disTown<<"(miles)"<<endl;
    cout<<"Distance on Highway with a tank of gas = ";
    cout<<disHway<<"(miles)"<<endl;
    //Exit Stage Here!
    return 0;
}
