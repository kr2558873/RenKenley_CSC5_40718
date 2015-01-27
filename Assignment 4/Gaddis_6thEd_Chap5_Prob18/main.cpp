/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 7:15 PM
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
     ifstream infile;
    infile.open("People.txt");

    int year,population,i;
    string barGraph="";

    cout << "PRAIRIEVILLE POPULATION GROWTH" << "\n";
    cout << "(each * represents 1000 people)" << "\n";

    for (year=1900; year<=2000; year+=20)
    {
        infile >> population;
        population /= 1000;

        cout << year << " ";
        for (i=1;i<=population;i++)
            cout << "*";
        
        cout << "\n";
    }
    return 0;
}