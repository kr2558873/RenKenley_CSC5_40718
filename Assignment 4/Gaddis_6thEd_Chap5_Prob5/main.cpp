/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 6:45 PM
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

    float membership = 2500;
    int year;
    for(int year=1; year<=6; year++ )
    {
membership += (membership * 0.04);
cout << "Membership Fee =" << membership << "\t";
cout << "Year =" << year << "\n";
    }
    return 0;
}