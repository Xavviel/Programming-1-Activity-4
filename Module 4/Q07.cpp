/******************************************************************************
Emergency Drone Distance Calculator 

Objectives: Operators enter the starting point and target point, and the program computes the straight-line distance.

Input: x1, y1, x2, and y2 


*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  //input
    double x1;
    double y1;
    double x2;
    double y2;
    double dx;
    double dy;
    double distance;
    int Distance;
    
    cout <<"Enter x1: ";
    cin >> x1;
    
    cout <<"Enter y1: ";
    cin >> y1;
    
    cout <<"Enter x2: ";
    cin >> x2;
    
    cout <<"Enter y2: ";
    cin >> y2;

  //process
    dx = (x2 - x1);
    dy = (y2 - y1);
    distance = sqrt(pow(dx,2) + pow(dy,2));
    Distance = round(distance);

  //output
    cout << fixed << setprecision (3) << "dx: " << dx <<endl;
    cout << fixed << setprecision (3) << "dy: "  << dy <<endl;
    cout << fixed << setprecision (3) << "Final Distance: " << distance <<endl;
    cout << "Rounded Distance: " << Distance <<endl;

    return 0;
}
