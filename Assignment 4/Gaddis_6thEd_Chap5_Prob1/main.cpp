/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 2:20 PM
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
    int x;
    
    cout << "Please enter an integer number: ";
    cin >> x;
    while ( x < 0 )
    {
        cout << "Please enter a positive integer number: ";
        cin >> x;
    }
    
    // Count from 1 all the way to the given integer
    int sum = 0;
    for (int i=1; i<=x; i++)
    {
        sum += i;
        cout << "The sum of all integer numbers from 1 up to " << x << " is: ";
        cout << sum << endl;
    }
     return 0;
}