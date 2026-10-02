/******************************************************************************
Tuition Installment Calculator

Objective: tuition through an installment plan. The school adds a processing fee
and then divides the balance into equal monthly payments.

Input: base tuition, processing-fee percentage, down-payment amount, and number of monthly installments.

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //input
    double baseTuition;
    double processingFee;
    double downPayment;
    int months;
    double Processing_Fee;
    double Fee;
    double adjustedTuition;
    double remainingBalance;
    double monthlyInstallment;
    
    
    cout <<"Enter Tuition:₱ ";
    cin >> baseTuition;
    
    cout <<"Enter Processing-fee (%): ";
    cin >> processingFee;
    
    cout <<"Enter Amount of Down-Payemnt:₱ ";
    cin >> downPayment;
    
    cout <<"Enter number of Monthly Installments: ";
    cin >> months;

    //process
    Processing_Fee = (processingFee)/100.0;
    Fee = (Processing_Fee * baseTuition);
    adjustedTuition = (baseTuition + Fee);
    remainingBalance = (adjustedTuition - downPayment);
    monthlyInstallment = (remainingBalance / months);

    //output
    cout << fixed << setprecision(2);
    cout << "Processing Fee:₱ " << Fee <<endl;
    cout << "Adjusted Tuition:₱ " << adjustedTuition <<endl;
    cout << "Balance:₱ " << remainingBalance <<endl;
    cout << "Monthly:₱ " << monthlyInstallment <<endl;
    

    return 0;
}
