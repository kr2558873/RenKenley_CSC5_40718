/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 13, 2015, 6:16 PM
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
float cap;//tank capacity
float m;//car milage
float avg;//miles over capacity for number of miles that my be driven per gallon of gas.
    //Input
 cout << "Enter the number of miles per gas tank: "<<m<<endl;
 cin>>m;
 cout << "Enter the number gallons in tank: "<<cap<<endl;
 cin>>cap;
    //Calculate
 avg = m/cap;
    //Output
 cout << "The car's Miles per Gallon is: " << avg <<" mpg " <<endl;
    //Exit Stage Right!
    return 0;
}

