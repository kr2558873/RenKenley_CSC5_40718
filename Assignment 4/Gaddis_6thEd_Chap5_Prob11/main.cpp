/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 4:14 PM
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
    //Declare variables

 float numberOfOrganisms = 0.0;
        int daysMultiply = 0;
        float dailyIncrease = 0.0;     
       
        cout << "Enter the starting number of organisms: ";
        cin >> numberOfOrganisms;
        while(numberOfOrganisms < 2)
        {
                cout << "The starting number of organisms must be at least 2.";
                cout << "Enter the starting number of organisms: ";
                cin >> numberOfOrganisms;
        }
       
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> dailyIncrease;
       
        while(dailyIncrease < 0)
        {
                cout << "The average daily population increase must be a positive value.";
                cout << "Enter the average daily population increase (as a percentage): ";
                cin >> dailyIncrease;
        }
       
        cout << "Enter the number of days they will multiply: ";
        cin >> daysMultiply;
        while(daysMultiply < 1)
        {
                cout << "The number of days must be at least 1.";
                cout << "Enter the number of days they will multiply: ";
                cin >> daysMultiply;
        }
       
        for (int count = 0; count != daysMultiply; count++)
        {
                numberOfOrganisms = numberOfOrganisms + (numberOfOrganisms * dailyIncrease);
                cout << "On day " << count + 1 << " the population size was " << setprecision(0) << fixed << numberOfOrganisms << "." << endl;
       
        }
    
return 0;
}