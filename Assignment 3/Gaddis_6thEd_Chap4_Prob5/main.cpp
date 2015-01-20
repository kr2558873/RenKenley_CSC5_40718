/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 17, 2015, 9:33 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
 float weight;
 float height;
 float BMI;
//Input
 cout << "Body Mass Index"<<endl;
 cout << "---------------------"<<endl;

 cout << "Enter your weight (in pounds): ";
 cin >> weight;
 cout << "\nEnter your height (in inches): ";
 cin >> height;
//Calculation
 BMI = (weight * 703) / (height * height);
//Output
 if(BMI < 18.5)
 cout << "You are underweight";
 if(BMI >= 18.5 && BMI <= 25)
 cout << "You are in great shape";
 if(BMI > 25)
 cout << "You are overweight";
 //Exit stage right
    return 0;
}

