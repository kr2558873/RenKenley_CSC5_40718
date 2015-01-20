/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 17, 2015, 6:33 PM
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
 float l1, l2, w1, w2, a1, a2;//length1, length2, width1, width2, area1, area2
//Input
 cout <<"Areas of Rectangles"<<endl;
 cout<<"---------------------------------"<<endl;

 cout << "Enter the length for rectangle 1: ";
 cin >> l1;
 cout << "Enter the width for rectangle 1: ";
 cin >> w1;
 cout << "Enter the length for rectangle 2: ";
 cin >> l2;
 cout << "Enter the width for rectangle 2: ";
 cin >> w2;
//Calculation
 a1 = l1 * w1;
 a2 = l2 * w2;
//Output
 if(a1 > a2)
 cout << "The area of rectangle 1 is greater than the area of rectangle 2 ";
 else if(a2 > a1)
 cout << "The area of rectangle 2 is greater than the area of rectangle 1 ";
 else if(a1 == a2)
 cout << "The area of both rectangles is the same ";
 //Exit stage right
    return 0;
}

