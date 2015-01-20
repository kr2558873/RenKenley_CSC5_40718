/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 14, 2015, 2:38 PM
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
 float cA = 15, cB = 12, cC = 9;//class A, B, and C
 float nA, nB, nC;// number A, B, and C
 float total;//total sell generated
//Input
 cout << "How many tickets were sold for Class A?  ";
 cin >> nA;
 cout << "How many tickets were sold for Class B?  ";
 cin >> nB;
 cout << "How many tickets were sold for Class C?  ";
 cin >> nC;

 cout << setprecision(2) << fixed;
 cout << "Sales from Class A: $" << nA * cA << endl;
 cout << "Sales from Class B: $" << nB * cB << endl;
 cout << "Sales from Class C: $" << nC * cC << endl;
 //Calculation
 total = (nA*cA) + (nB*cB) + (nC*cC);
//Output
 cout << "Total sales generated: $" << total << endl;
 //Exit Stage Right
    return 0;
}

