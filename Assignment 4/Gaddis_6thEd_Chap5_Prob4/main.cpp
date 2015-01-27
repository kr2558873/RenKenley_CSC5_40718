/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 5:17 PM
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    int i = 0;
do {
float calories = i * 3.90;
cout << calories << " calories burnt after " << i << " minute(s)" << endl;
i++;
} while(i <= 30);
    return 0;
}
    