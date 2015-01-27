/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 23, 2015, 10:32 PM
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
    float floors=0, count=0, rooms, rooms_total=0, occupied, occupied_total=0, 	unoccupied, number=0, percentage=0;
cout << "Welcome to Hector's Hotel Occupancy Calculator, Build 1.0\n";
cout << "How many floors in your hotel?\n";
cin >> floors;
while (floors < 1)//if user enters 0 or less floors, error
{
cout << "ERROR: You cannot enter 0 or less for the number of floors!\n";
cout << "PLEASE TRY AGAIN.\n";
cin >> floors;
}
while (number < floors)//loop to ask for input from user, once for each floor
{
count++;
if (count == 13)
{cout <<"We will be skipping floor #13, as is common in most hotels.\n";
continue;
}
cout <<"How many rooms on floor number " << count << "? (cannot be less than 10)\n";
cin >> rooms;
while (rooms <10)//if user enters less than 10 rooms per floor- error
{		
cout <<"ERROR: Cannot be less than 10 rooms! Please try again.\n";
cin >> rooms;
}
cout <<"How many rooms are occupied on this floor?\n";
cin >> occupied;
while (occupied > rooms)
{		
cout <<"ERROR: You cannot have more occupied rooms than total rooms on floor! Please try again.\n";
cin >> occupied;
}
number++;
rooms_total+=rooms;
occupied_total+=occupied;
}
unoccupied = rooms_total - occupied_total;
percentage = occupied_total / rooms_total *100;
cout <<"Total Floors: " << floors << endl;
cout <<"Total Rooms: " << rooms_total << endl;
cout <<"Total Occupied: " << occupied_total << endl;
cout <<"Total Unoccupied: " << unoccupied << endl;
cout <<"Percentage of rooms occupied is " << fixed << setprecision(2) << percentage << "%.\n";
    return 0;
}