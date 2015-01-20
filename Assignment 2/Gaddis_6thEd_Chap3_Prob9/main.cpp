/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 16, 2015, 8:11 PM
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
 float lPay, ins, gas, oil, tires, maint;//loanPayment, insurance, gas, oil, tires, maintenance
 float mTot, aTot;//monthly and annual total
//Input
 cout << "Enter your monthly loan payment: ";
 cin >> lPay;
 cout << "Enter your monthly insurance: ";
 cin >> ins;
 cout << "Enter your monthly gas expense: ";
 cin >> gas;
 cout << "Enter your monthly oil expenses: ";
 cin >> oil;
 cout << "Enter your monthly tires expenses: ";
 cin >> tires;
 cout << "Enter your monthly maintenance expenses: ";
 cin >> maint;
//Calculation
 mTot = lPay + ins + gas + oil + tires + maint;
 aTot = mTot * 12;
//Output
 cout << setprecision(2) << fixed;
 cout << "Your total monthly expenses are: $" << mTot << endl;
 cout << "Your total  annual expenses are: $" << aTot << endl;
 //Exit stage right
    return 0;
}

