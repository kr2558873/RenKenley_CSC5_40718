/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 17, 2015, 5:20 PM
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
int month;
int day;
int year;
//Input
 cout << "Enter a month (in numeric form): ";
 cin >> month;
 cout << "Enter a day (1-31): ";
 cin >> day;
 cout << "Enter a two-digit year: ";
 cin >> year;
//Output
 cout <<"Magic dates"<<endl;
 cout<<"---------------"<<endl;

 if(month * day == year)
 cout << "The date is MAGIC: "<<endl;
 else
 cout << "The date is NOT magic: "<<endl;
 //Exit stage here
    return 0;
}

