/* 
 * File:   main.cpp
 * Author: Kenley Ren
 * Created on January 25, 2015, 1:45 PM
 * Purpose: Homework
 */

//System Libraries
# include <iostream>
# include <cmath>
# include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
void fallingDistance2(float &, float);
float fallingDistance1(float);
const float g = 9.8;
float t;
float d;
//Execution begins here!
int main(int argc, char** argv) {
   cout<<"calculated by passby values.\n";
    cout<<"Time \t\t Distance\n";
    cout<<"-------------------\n";
    for (t=1;t<=10;t++)
    {
        cout<<t<<"\t\t"<<fallingDistance1(t)<<endl;
    }
    cout<<"calculated by reference values.\n";
    cout<<"Time \t\t Distance\n";
    cout<<"-------------------\n";
    for (t=1;t<=10;t++)
    {
        fallingDistance2(d, t);
        cout<<t<<"\t\t"<<d<<endl;
    }
    return 0;
}
float fallingDistance1(float t)
{
    return 0.5*9.8*t*t;
}
void fallingDistance2(float &refd, float t)
{
    refd=0.5*9.8*t*t;
}