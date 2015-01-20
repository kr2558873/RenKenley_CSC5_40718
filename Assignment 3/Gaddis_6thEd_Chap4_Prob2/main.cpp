/* 
 * File:   main.cpp
 * Author: Kenley
 *
 * Created on January 16, 2015, 9:50 AM
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
int n;//number
//Input
 cout << "   Roman Numeral Converter"<<endl;
 cout << "----------------------------------------------------"<<endl;

 cout << "Enter a number (1-10): ";
 cin >> n;
//Output
 if(n < 1 || n > 10)
 cout << "The number cant be less than 1 or greater than 10";
 else{
 switch(n)
 {
 case 1: cout << "The Roman numeral for 1 is I";
   break;
 case 2: cout << "The Roman numeral for 2 is II";
   break;
 case 3: cout << "The Roman numeral for 3 is III";
   break;
 case 4: cout << "The Roman numeral for 4 is IV";
   break;
 case 5: cout << "The Roman numeral for 5 is V";
   break;
 case 6: cout << "The Roman numeral for 6 is VI";
   break;
 case 7: cout << "The Roman numeral for 7 is VII";
   break;
 case 8: cout << "The Roman numeral for 8 is VIII";
       break;
 case 9: cout << "The Roman numeral for 9 is IX";
   break;
 case 10: cout << "The Roman numeral for 10 is X";
   break;
 default:  cout << "You must enter a number between 1 to 10"<<endl;
 }  //switch ends
 }  //else ends
 //Exit stage right
    return 0;
}

