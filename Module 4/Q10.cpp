/******************************************************************************
Online Store Invoice and Shipping Boxes

Objectives: console invoice. . The customer purchases one product type in multiple units. Items are packed into 
boxes with a fixed capacity, and the invoice must show the product name, pricing breakdown, and number of boxes required.

Input: unit price, quantity, discount percentage, shipping fee per box, and units per box.


*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    string productName;
    double unitPrice;
    int quantity;
    double discount;
    double shippingFee;
    int units;
    double subtotal;
    double discountAmount;
    double merchandise;
    double exactBoxes;
    int boxesRequired;
    double shippingTotal;
    double amountDue;
    
    
    cout <<"Enter Product Name: ";
    getline (cin, productName);
    
    cout <<"Enter Unit Price:₱ ";
    cin >> unitPrice;
    
    cout <<"Enter Quantity: ";
    cin >> quantity;
    
    cout <<"Enter Discount (%): ";
    cin >> discount;
    
    cout <<"Enter Shipping Fee per Box:₱ ";
    cin >> shippingFee;
    
    cout <<"Enter Units per Box: ";
    cin >> units; 
    
    
    subtotal = (unitPrice * quantity);
    discountAmount = subtotal * (discount /100);
    merchandise = (subtotal - discountAmount);
    exactBoxes = quantity / static_cast<double>(ceil(units));
    boxesRequired = static_cast<int>(ceil(exactBoxes));
    shippingTotal = (boxesRequired * shippingFee);
    amountDue = (merchandise + shippingTotal);
    
    cout << fixed << setprecision (2);
    
    cout <<"\n==================================================\n";
    cout <<"\tOnline Store Invoice\n";
    cout <<"\n==================================================\n";
    
    cout <<"\tProduct: " << productName <<"\n";
    cout <<"\tUnit Price: " << unitPrice <<"\n";
    cout <<"\tQuantity: " << quantity <<"\n";
    cout <<"\tDiscount:₱ " << discount <<"\n";
    cout <<"\tShipping Fee per Box:₱ " << shippingFee <<"\n";
    cout <<"\tUnits per Box: " << units <<"\n";
    
    cout <<"\n\tSubtotal:₱ " << subtotal <<"\n";
    cout <<"\tDiscount:₱ " << discountAmount <<"\n";
    cout <<"\tMerchandise:₱ " << merchandise <<"\n";
    cout <<"\tExact Boxes: " << exactBoxes <<"\n";
    cout <<"\tBoxes: " << boxesRequired <<"\n";
    cout <<"\tShipping: " << shippingTotal <<"\n";
    
    cout <<"\n=================================================\n";
    cout <<"\tAmount Due: " << amountDue <<"\n";
    cout <<"\n=================================================\n";
    
    return 0;
}
