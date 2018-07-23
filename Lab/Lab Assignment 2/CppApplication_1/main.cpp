/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: amier
 *
 * Created on July 1, 2018, 9:21 PM
 */

#include <iostream>
#include <iomanip>


using namespace std;

int main ()
{
 double basePrice = 4.31;
 double stateTax = 0.0417 * basePrice;
 double fedTax = 18.4 * basePrice;
 double salesTax = 0.0225 * basePrice; 
 double profitRange = .065 * basePrice;
 double pumpPrice = basePrice + stateTax + fedTax + basePrice * SalesTax;

 cout << "The total sales tax on a $" << basePrice <<" basePrice is: $"
 << totaltax << endl << endl;
 
    return 0;
}

