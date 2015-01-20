/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 19, 2015, 11:04 PM
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
float pennies, nickels, dimes, quarters, total;

 cout << "Change for a Dollar Game"<<endl;
 cout << "-------------------------------"<<endl;
//Input
 cout << "Enter the number of pennies: ";
 cin >> pennies;
 cout << "Enter the number of nickels: ";
 cin >> nickels;
 cout << "Enter the number of dimes: ";
 cin >> dimes;
 cout << "Enter the number of quarters: ";
 cin >> quarters;
//Calculation
 total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);
//Output
 if(total == 1.00)
 cout << "Congratulations, you win! You entered exactly one dollar!"<<endl;
 else
 {
 if(total < 1.00 && total > 0)
 {
 cout << "Oops, you lose. You entered less than one dollar.  Try again later!!"<<endl;
 }
 else 
 {
 if(total > 1.00)
 {
 cout << "You entered more than one dollar.  Try again at other times."<<endl;
 }
 else
 {
 cout << "Sorry. The number of coins have to be greater than 0. Try again";
 }
 }
 }
    return 0;
}

