/******************************************************************************
Digital Storage Capacity Report

Objectives: records a file size in bytes and wants the program to report 
the same size in kilobytes, megabytes, and gigabytes using binary-based units.

Input: file size in bytes

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //input
    long long fileSize;
    double kilobytes;
    double megabytes;
    double gigabytes;
    int wholeMB;
    
    cout <<"Enter File Size in Bytes: ";
    cin >> fileSize;
    
    //process
    kilobytes = (fileSize / 1024);
    megabytes = (kilobytes/ 1024.0);
    gigabytes = (megabytes / 1024);
    wholeMB = megabytes;

    //output
    cout << fixed <<setprecision (2) << "KB: " << kilobytes << endl;
    cout << fixed <<setprecision (2) << "MB: " << megabytes << endl;
    cout << fixed <<setprecision (4) << "GB: " << gigabytes << endl;
    
    cout <<"Whole MB: "<< wholeMB <<endl;
    
    return 0;
}
