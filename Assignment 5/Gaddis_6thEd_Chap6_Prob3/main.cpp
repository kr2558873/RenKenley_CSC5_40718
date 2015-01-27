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
float getsales (float &);
void findhighest (float, float, float, float);
//Execution begins here!
int main(int argc, char** argv) {
    float northeast = 0;
    float southeast = 0;
    float northwest = 0;
    float southwest = 0;
    cout << "Enter NorthEast sales: $" ;
    cout << getsales(northeast) << endl;
    cout << "Enter SouthEast sales: $"; 
    cout << getsales(southeast) << endl;
    cout << "Enter NorthWest sales: $";
    cout << getsales(northwest) << endl;
    cout << "Enter SouthWest sales: $";
    cout << getsales(southwest) << endl;
    findhighest(northeast, southeast, northwest, southwest);
    return 0;
}

float getsales (float & num)
{
    do
    {
        if(!cin)
        {
            cin.clear();
            cin.ignore(100, '\n');
        }
        
        cin >> num;
        cout << "Number entered: ";
        
        
    }while(!cin || num <= 0);
    return num;
}
void findhighest (float ne, float se, float nw, float sw) 
{
    const char *who = "NorthEast";
    float high = ne;
    if(se > high)
    {
        who = "SouthEast";
        high = se;
    }
    if(nw > high)
    {
        who = "NorthWest";
        high = nw;
    }
    if(sw > high)
    {
        who = "SouthWest";
        high = sw;
    }
    cout << who << "has the highest sale (" << high << ")" << endl;
}