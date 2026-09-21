// Project2.1_Ocean_Levels_JasmineV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//  Created by Jasmine V on 1/18/23. 
// This program will calculate the ocean level rise over a period of years based on a given rate of rise per year.

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, this Program will calculate the ocean level risen over a period of given years.\n";
    cout << "The ocean is rising at a rate of 1.5 millimeters per year.\n";

    double risingOceanLevel = 1.5; // millimeters per year

    double levelAfter5Years = risingOceanLevel * 5; 
    double levelAfter7Years = risingOceanLevel * 7;
    double levelAfter10Years = risingOceanLevel * 10; 

    cout << "The Ocean Level after 5 years will be " << levelAfter5Years << " millimeters.\n";
    cout << "The Ocean Level after 7 years will be " << levelAfter7Years << " millimeters.\n";
    cout << "The ocean level fter 10 years will be " << levelAfter10Years << " milimeters. \n";

    return 0;

}


