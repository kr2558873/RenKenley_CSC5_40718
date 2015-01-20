/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 15, 2015, 8:11 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
 string m1, m2, m3;//month 1, 2, and 3
 float r1, r2, r3;//rainfall of three months
 float average;
//Input
 cout << "Enter the name of the month: ";
 cin >> m1;
 cout << "Enter the rainfall (in inches): ";
 cin >> r1;
 cout << "Enter the name of the month: ";
 cin >> m2;
 cout << "Enter the rainfall (in inches): ";
 cin >> r2;
 cout << "Enter the name of the month: ";
 cin >> m3;
 cout << "Enter the rainfall (in inches): ";
 cin >> r3;
//Calculation
 average = (r1 + r2 + r3) / 3;
//Output
 cout << setprecision(2) << fixed;
 cout << "The average rainfall for " << m1 << ", "
  << m2 << ", and " << m3 << " is: " << average << "inches" << endl;
 //Exit stage here
    return 0;
}

