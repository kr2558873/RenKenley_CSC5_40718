/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 14, 2015, 5:12 PM
 */

//System Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
float s1, s2, s3, s4, s5;//score 1 to 5
float avg;//average of scores
//Input
 cout << "Enter score 1: ";
 cin >> s1;
 cout << "Enter score 2: ";
 cin >> s2;
 cout << "Enter score 3: ";
 cin >> s3;
 cout << "Enter score 4: ";
 cin >> s4;
 cout << "Enter score 5: ";
 cin >> s5;
//Calculation
 avg = (s1 + s2 + s3 + s4 + s5)/5;
//Output
 cout << setprecision(1) << fixed;
 cout << "The average score is: " << avg << endl;
 //Exit Stage Right
    return 0;
}

