/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 17, 2015, 8:29 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
float number1, number2;
//Input
 cout << "Enter two numbers here: " <<endl;
 cin >> number1 >> number2;
//Output
 if(number1 > number2)
 cout << "The larger number is: " << number1 <<endl;
 else
 cout << "The larger number is: " << number2 <<endl;
 //Exit stage here
    return 0;
}

