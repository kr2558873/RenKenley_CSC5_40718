/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 25, 2015, 1:45 PM
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
float calculatedRetail (float cost, float markUp);
//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
float retail, cost, markUp;
cout<<fixed<<showpoint<<setprecision(2);
cout<<"Enter the wholesale cost for the item: $";
cin >>cost;
//validate the cost price
while (cost<0)
{
cout<<"Please enter a positive number. $"<<endl;
cin >>cost;
}
cout<<"Now please enter its markup percentage: ";
cin >>markUp;
//validate the markup percentage	
while (markUp<0)
{
cout<<"Please enter a positive number for markup: ";
cin >>markUp;
}
//convert markup percentage to two decimal point
markUp = (markUp/100);
cout<<"The retail price for the item is: "<<endl;
cout<<"$ " <<calculatedRetail(cost, markUp)<<endl;

return 0;
}
float calculatedRetail (float cost, float markUp)
{
return (cost*markUp)+cost;
}