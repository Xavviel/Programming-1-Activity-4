/******************************************************************************
Campus Canteen Group Order 

Objectives: Compute Subtotal of the Meal, Service Charge, Final Bill of the Meal, and the Equal Share of each Student

Input
Meal Price, Quantity Ordered, Service Charge Percentage, and Number of Students


*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //input
    double mealPrice; 
    int quantityOrdered;
    double serviceCharge;
    int students;
    double subtotal;
    double servicecharge;
    double Servicecharge;
    double finalbill;
    double share;
    
    
    
    cout <<"Enter Meal Price:₱ ";
    cin >> mealPrice;
    
    cout <<"Enter Quantity: ";
    cin >> quantityOrdered;
    
    cout <<"Enter Service Charge(%): ";
    cin >> serviceCharge;
    
    cout <<"Enter Number of Students: ";
    cin >> students;

    //process
    subtotal = (mealPrice * quantityOrdered);
    
    servicecharge = (serviceCharge)/100.0;
    
    Servicecharge = (subtotal * servicecharge);
    
    finalbill = (subtotal + Servicecharge);
    
    share = (finalbill/students);

    //output
    cout << fixed <<setprecision(2);
    cout <<"Subtotal:₱ " <<subtotal<<endl;
    cout <<"Service Charge:₱ "<<Servicecharge<<endl;
    cout <<"Final Bill:₱ "<<finalbill<<endl;
    cout <<"Share/Student: "<<share<<endl;
    
    return 0;
}
