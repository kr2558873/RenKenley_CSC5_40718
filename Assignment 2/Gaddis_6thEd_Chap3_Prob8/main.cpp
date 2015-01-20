/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 16, 2015, 7:02 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variable
float rCost;//replacement cost
float mIns;//minimum insurance recommended
//Input
 cout << "Minimum insurance recommended" <<endl;
 cout<< "-------------------------------------------" <<endl;

 cout << "Enter the replacement cost of your building: ";
 cin >> rCost;
 //Calculation
 mIns = rCost * 0.80;
//Output
 cout << "The minimum insurance you should buy is: $" << mIns << endl;
    return 0;
}

