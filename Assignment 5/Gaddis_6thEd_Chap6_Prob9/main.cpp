/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 25, 2015, 1:45 PM
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
float calculations(int, float, float);
//Execution begins here!
int main(int argc, char** argv) {
float r, f;
int t;
cout <<" Enter the number of years you plan to let the money sit: ";
cin >> t;
cout <<" \nEnter the amount of money you wish to have in the future: ";
cin >> f;
cout <<" \nPlease enter the APR (ex: 5.6): " ;
cin >> r;
r /=100;
float p=0;
p = calculations(t,f,r); 
cout << "The amount needed to invest today is: "<< p<<endl;
return 0;
}

float calculations(int t, float f, float r){
float presentAmount = f/(pow((1+r),t));
return presentAmount;
}
