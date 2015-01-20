/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 19, 2015, 8:13 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
 float seconds;
 float hour = 3600;//3600 seconds
 float day = 86400;//86400 seconds
//Input
 cout << "Time Calculator"<<endl;
 cout << "-------------------"<<endl;

 cout << "Enter the number of seconds: ";
 cin >> seconds;
//Output
 cout << setprecision(2) << fixed;
 if(seconds >= 86400)
 cout << "The seconds you entered = " << seconds/86400 << " days "<<endl;
 else { 
     if(seconds >= 3600) {
 cout << "The seconds you entered = " << seconds/3600 << " hours "<<endl;
 }
 else { 
         if(seconds >= 60) {
 cout << "The seconds you entered = " << seconds/60 << " minutes "<<endl;
 }
 else {
            if(seconds < 60 && seconds > 0)
 {
 cout << "The seconds you entered = " << seconds << " seconds "<<endl;
 }
 else
 {
 cout << "You must enter a number greater than 0"<<endl;
 }
 
 }
 }
 }

    return 0;
}

