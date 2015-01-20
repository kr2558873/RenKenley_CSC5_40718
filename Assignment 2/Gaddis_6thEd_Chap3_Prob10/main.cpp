/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 16, 2015, 10:27 PM
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
 float C;//Celsius
 float conv;//conversion
//Input
 cout << "Enter Celsius temperature: ";
 cin >> C;
//Calculation
 conv = (1.8 * C) + 32;
//Output
 cout << C << " Celsius = " << conv << " Fahrenheit "<<endl;
//Exit stage right
    return 0;
}

