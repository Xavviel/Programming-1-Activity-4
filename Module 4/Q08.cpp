/******************************************************************************
Environmental Sensor Summary 

Objectives: records three temperature readings. The technician wants a summary 
showing the average and several different ways to transform that average.

Input: three decimal temperature readings

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double temp1;
    double temp2;
    double temp3;
    double average;
    
    cout <<"Enter Temperature 1: ";
    cin >> temp1;
    
    cout <<"Enter Temperature 2: ";
    cin >> temp2;
    
    cout <<"Enter Temperature 3: ";
    cin >> temp3;
    
    average = (temp1 + temp2 + temp3)/3;
    
    
    cout << fixed << setprecision(3) << "Average: " << average <<endl;
    
    cout << "|T1 - T3|: " << fabs(temp1 - temp3) <<endl;
    cout << "Floor: " << static_cast<int>(floor(average)) <<endl;
    cout << "Ceil: " << static_cast<int>(ceil(average)) <<endl;
    cout << "Trunc: " << static_cast<int>(trunc(average)) <<endl;
    cout << "Round: " << static_cast<int>(round(average)) <<endl;
    
    
    return 0;
}
