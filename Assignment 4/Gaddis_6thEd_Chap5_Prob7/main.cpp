/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 8:43 PM
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
    int days, salary; // Initiate the counter
double total = 0.0;
//Get integer
cout << "Enter a positive number\n";
cin >> days;
for (; days > 0; days--)
{
(total+=days*2);
}
//Display Total
cout << fixed << showpoint << setprecision(0);
cout << "The salary is $" << total << endl;
    return 0;
}