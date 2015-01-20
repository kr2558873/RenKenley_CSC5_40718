/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 16, 2015, 2:45 PM
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
 float wWeight = 9.2; // 9.2 pounds each
 float pEmpty, pWeight;
 float wNum;//Widget number
//Input
 cout << "How much does the empty pallet weigh (in pounds): "<<endl;
 cin >> pEmpty;
 cout << "How much does the pallet weigh (w/ widgets): "<<endl;
 cin >> pWeight;
//Calculation
 wNum = (pWeight - pEmpty) / wWeight;
//Output
 cout << "There are: " << wNum << " widgets on the pallet" <<endl;
 //Exit stage right
    return 0;
}

