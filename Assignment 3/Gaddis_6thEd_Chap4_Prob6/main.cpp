/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 18, 2015, 10:45 PM
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
float mass;
float weight;
//Input
 cout <<"Mass and Weight"<<endl;
 cout <<"---------------------"<<endl;

 cout << "Enter an object's mass (in kilograms): ";
 cin >> mass;
 //Calculation
 weight = mass * 9.8;
//Output
 if(weight > 1000)
 {
 cout << "The mass is: " << weight << " newtons"<<endl;
 cout << "The object's mass is too heavy"<<endl;
 }
 if(weight < 10)
 {
 cout << "The mass is: " << weight << " newtons"<<endl;
 cout << "The object's mass is too light";
 }
 if(weight >=10 && weight <=1000)
 {
 cout << "The mass is: " << weight << " newtons";
 }
 //Exit stage here
    return 0;
}

