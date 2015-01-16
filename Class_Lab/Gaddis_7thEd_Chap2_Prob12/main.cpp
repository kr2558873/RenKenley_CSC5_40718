/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 8, 2015, 7:45 PM
 * Purpose: Homework Assignment 1
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const unsigned short CVFTACS=43560;// Percent Conversion


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float inSqFt, outAcrs;
    //Prompt for input
    cout<<"Input the number of square feet"<<endl;
    cout<<"to convert to Acres"<<endl;
    cin>>inSqFt;
    //Calculate Acres
    outAcrs=inSqFt/CVFTACS;
    //Output the results
    cout<<inSqFt<<"(sq feet) = ";
    cout<<outAcrs<<"(acres)"<<endl;
    //Exit Stage Here!
    return 0;
}
