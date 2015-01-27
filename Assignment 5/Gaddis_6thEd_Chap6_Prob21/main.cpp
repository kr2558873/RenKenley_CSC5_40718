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
bool isPrime(int);
//Execution begins here!
int main(int argc, char** argv) {
    int num=0;
    cout << "Enter a number and I'll tell you whether it is prime: ";
    cin >> num;
    if (isPrime(num)==true)
    cout << num << " is prime.";
    else
        cout << num << " is NOT prime.";
    return 0;
}
bool isPrime(int input)
{
    if(input<1) 
        return false;
    else if (input == 1||input ==2 ||input==3)
    {
        return true;
    }
    else
    {
        for(int i=2; i<input; i++)
        {
            if(input%i==0)
                return false;
        }
        return true;
    }
}