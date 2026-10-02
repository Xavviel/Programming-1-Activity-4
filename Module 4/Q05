/******************************************************************************

Conference Seating Planner

Objectives: A conference organizer needs to arrange round tables. Each table has a fixed number of seats, and every attendee must have a seat.

Input: number of attendees and seats per table

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    //input
    double attendees;
    double seatsTable;
    double exactTable;
    int tablesRequired;
    int totalSeats;
    int unusedSeats;
    
    cout <<"Enter Number of Attendees: ";
    cin >> attendees;
    
    cout <<"Enter Seats per Table: ";
    cin >> seatsTable;
    
    //process
    exactTable = static_cast<double>(attendees) / seatsTable;
    tablesRequired = ceil (exactTable);
    totalSeats = tablesRequired * seatsTable;
    unusedSeats = (totalSeats - attendees);
    
    //output
    cout << fixed <<setprecision (2);
    cout <<"Exact Table: "<< exactTable <<endl;
    cout <<"Tables Required: "<< tablesRequired <<endl;
    cout <<"Total Seats: "<< totalSeats <<endl;
    cout <<"Unused Seats: "<< unusedSeats <<endl;
    
    return 0;
}
