/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 15, 2015, 12:30 PM
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
    //Declare variables
 const float YEN_PER_DOLLAR = 83.14;
 const float EUROS_PER_DOLLAR = 0.7337;

float dollars;
float yen;
float euros;
//Input
 cout << setprecision(2) << fixed;

 cout << "Enter dollar amount: ";
 cin >> dollars;
//Calculation
 yen = dollars * YEN_PER_DOLLAR;
 euros = dollars * EUROS_PER_DOLLAR;
 //Output
 cout << "-------Conversion-------\n";
 cout << "$" << dollars << " = " << yen << " Yen " <<endl;
 cout << "$" << dollars << " = " << euros << " Euros " <<endl;
 //Exit stage right
    return 0;
}

