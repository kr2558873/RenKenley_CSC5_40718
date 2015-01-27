/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 25, 2015, 1:45 PM
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
int coinFlip();
const int HEADS = 1;
const int TAILS = 2;
//Execution begins here!
int main(int argc, char** argv) {
   int tosses, count;
count = 0;
cout << "How many tosses should I make?" << endl;
cin >> tosses;
while (count <= tosses)
{	coinFlip();
count++;		
}
return 0;
}
int coinFlip()
{	
srand((unsigned)time(0));	
int flip = (rand()%2)+1;
if (flip == HEADS)
cout << "Heads!.\n"; 
else if (flip == TAILS)
cout << "Tails!.\n";
return flip;
}