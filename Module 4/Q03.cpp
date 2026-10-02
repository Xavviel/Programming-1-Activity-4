/******************************************************************************
Ride-Sharing Fare Split

Requirements: base fare, distance charge, toll fee, and a
percentage-based booking fee

Input: base fare, distance in kilometers, rate per kilometer, toll fee, booking-fee percentage, and number of
passengers.


*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //input
    double baseFare;
    double distance;
    double rate;
    double toll;
    double booking;
    int passengers;
    double distanceCharge;
    double preFee;
    double Booking;
    double booKing;
    double grandTotal;
    double share;
    
    cout <<"Enter Base Fare: ";
    cin >> baseFare;
    
    cout <<"Enter Distance in Kilometers: ";
    cin >> distance;
    
    cout <<"Enter Rate per Kilometer: ";
    cin >> rate;
    
    cout <<"Enter Toll Fee: ";
    cin >> toll;
    
    cout <<"Enter Booking Fee (%): ";
    cin >> booking;
    
    cout <<"Enter Number of Passengers: ";
    cin >> passengers; 

  //process
    distanceCharge = (distance * rate);
    preFee = (baseFare + distanceCharge + toll);
    Booking = (booking)/100.0;
    booKing = (Booking * preFee);
    grandTotal = (booKing + preFee);
    share = (grandTotal/passengers);

  //output
    cout << fixed <<setprecision(2);
    cout << "Distance Charge:₱ "<<distanceCharge<<endl;
    cout << "Pre-Fee:₱ "<<preFee<<endl;
    cout << "Booking Fee:₱ "<<booKing<<endl;
    cout << "Total:₱ "<<grandTotal<<endl;
    cout << "Share per Passenger:₱ "<<share<<endl;
    
    return 0;
}
