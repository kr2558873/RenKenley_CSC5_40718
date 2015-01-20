/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 19, 2015, 8:34 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
 float calories, fatgrams, fatcalories;
 float lowfat;
//Input
 cout << "Enter the number of calories in food: "<<endl;
 cin >> calories;
 if(calories < 0)
 {
 cout << "Calories cannot be less than 0"<<endl;
 cout << "Enter calories again: "<<endl;
 }

 cout << "Enter the number of fat grams in food: "<<endl;
 cin >> fatgrams;
 if(fatgrams < 0 || fatgrams > calories)
 {
 cout << "Fatgrams cannot be less than 0 or greater than calories"<<endl;
 cout << "Enter fatgrams again: "<<endl;
 }
//Calculation
 fatcalories = fatgrams * 9;
 lowfat = fatcalories/calories;
//Output
 cout << "Calories from fat: " << lowfat * 100 << "%" <<endl;
 if(lowfat < 0.30)
 cout << "This food is low in fat"<<endl;
 //Exit stage right
    return 0;
}

