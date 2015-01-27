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
 float toCelcius (int fTemp)
{
    return (5.0/9.0)*((float)fTemp - 32.0);
}
//Execution begins here!
int main(int argc, char** argv) {
      cout << "F\t\tC\n";
    for (int i = 0;i <= 20;i++)
    {
cout << i << "\t\t" << (int)toCelcius(i) << endl;
    }
    return 0;
}