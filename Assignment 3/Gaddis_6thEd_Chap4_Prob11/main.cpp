/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 19, 2015, 8:34 PM
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
 int books;
 int points;
//Input
 cout <<"Book Club Points"<<endl;
 cout << "--------------------"<<endl;

 cout << "Enter the number of books purchased this month: "<<endl;
 cin >> books;
//Output
 if(books == 0)
 {
 points = 0;
 cout << "You have earned: " << points << " points"<<endl;
 }
 if(books == 1)
 {
 points = 5;
 cout << "You have earned: " << points << " points"<<endl;
 }
 if(books == 2)
 {
 points = 15;
 cout << "You have earned: " << points << " points"<<endl;
 }
 if(books == 3)
 {
 points = 30;
 cout << "You have earned: " << points << " points"<<endl;
 }
 if(books >= 4)
 {
 points = 60;
 cout << "You have earned: " << points << " points"<<endl;
 }
 else
 {
 if(books < 0)
 cout << "Number of books cannot be less than 0"<<endl;
 }
    return 0;
}

