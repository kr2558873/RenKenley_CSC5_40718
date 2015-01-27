/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 9:50 PM
 * Purpose: Homework
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    int aNumber=0;
    int numbers=0;
    float sum=0.0;
    float average=0.0;
    ifstream randomFile;
    randomFile.open("C:\\Random.txt");
    if (randomFile.fail())
        cout << "failed to read file.";
    else    {
        while (randomFile >> aNumber) {
            numbers++;
            sum+=aNumber;
        }
        if (numbers>0)
            average = sum/numbers;
        else
            average=0.0;
        cout << "Number of numbers: " << numbers << "\n";
        cout << "Sum of the numbers: " << sum << "\n";
        cout << "Average of the numbers: " << average;
    }

    randomFile.close();
    return 0;
}