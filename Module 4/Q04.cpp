/******************************************************************************
Paint Can Estimator

Objectives: program must determine how many cans are required.

Input: wall width, wall height, number of coats, and coverage per can in square meters.

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  //input
    double width;
    double height; 
    double coats;
    double coverage;
    double wallArea;
    double paintArea;
    double exactCans;
    
    cout <<"Enter Wall Width: ";
    cin >> width;
    
    cout <<"Enter Wall Height: ";
    cin >> height;
    
    cout <<"Enter Number of Coats: ";
    cin >> coats;
    
    cout <<"Enter Coverage per can in Square Meters: ";
    cin >> coverage;

  //process
    wallArea = (width * height);
    paintArea = (wallArea * coats);
    exactCans = (paintArea/coverage);
    
  //output  
    cout << fixed <<setprecision(2);
    cout <<"Wall Area: "<<wallArea<<endl;
    cout <<"Total Paint Area: "<<paintArea<<endl;
    cout <<"Exact Cans: "<<exactCans<<endl;
    cout <<"Cans to Buy: "<<ceil(exactCans)<<endl;

    return 0;
}
