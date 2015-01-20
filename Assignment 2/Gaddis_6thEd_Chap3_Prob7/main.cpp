/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 16, 2015, 6:43 PM
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
 float cookies;
 float totalCalories;
//Input
 cout << "Enter the number of cookies you ate: " <<endl;
 cin >> cookies;
//Calculation
 totalCalories = cookies * 75;//40 cookies in a bag = 10 servings, 4 cookies = 1 serving = 300 calories, so 1 cookie = 75 calories
//Output
 cout << "You consumed: " << totalCalories << " calories " <<endl;
 //Exit stage right
    return 0;
}

