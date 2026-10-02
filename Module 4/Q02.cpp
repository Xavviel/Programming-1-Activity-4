/******************************************************************************
Scholarship Grade Summary

Objectives: 4 Component scores and each component contributes a fixed percentage to the final grade

Requirements: quizzes 20%, laboratory 25%, project 25%, examination 30%

Input 
Quiz, Lab, Project, Examination Scores

*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    //input
    double quiz;
    double lab;
    double project;
    double exam;
    double quizGrade;
    double labGrade;
    double projectGrade;
    double examGrade;
    double weightedGrade;
    double roundedGrade;
    double integerGrade;
    
    cout <<"Enter Quiz Score (In Decimal Value): ";
    cin >> quiz;
    
    cout <<"Enter Laboratory Score (In Decimal Value): ";
    cin >> lab;
    
    cout <<"Enter Project Score (In Decimal Value): ";
    cin >> project;
    
    cout <<"Enter Examination Score (In Decimal Value): ";
    cin >> exam;

    //process
    quizGrade = (quiz * 0.20);
    labGrade = (lab * 0.25);
    projectGrade = (project * 0.25);
    examGrade = (exam * 0.30);
    
    weightedGrade = (quizGrade + labGrade + projectGrade + examGrade);

    //output
    cout <<fixed <<setprecision(2);
    cout <<"Weighted Grade: " <<weightedGrade<<endl;
    cout <<"Rounded Grade: " <<round(weightedGrade)<<endl;
    cout <<"Cast to Int: " <<(int)(weightedGrade)<<endl;
    
    return 0;
}
