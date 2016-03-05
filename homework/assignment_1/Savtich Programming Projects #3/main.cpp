/* 
 * File:   main.cpp
 * Author: Oscar Saavedra
 * Created on March 4, 2016, 1:45 PM
 * Purpose: Gives the user the monetary value of the number of coins inputed
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
    int num_qtr, num_dim, num_nik; // Amount of each coin the user has
    
    int val_qtr, val_dim, val_nik; // The value of each coin
    
    int amt_qtr, amt_dim, amt_nik; // The monetary value of the coins the user has.
    
    int tot_mon; // The entire amount of money the user has
    
    cout << "Press return after after entering a number.\n";
    cout << "How many quarters do you have?\n";
    cin >> num_qtr;
    
    cout << "How many dimes do you have?\n";
    cin >> num_dim;
    
    cout << "How many nickels do you have?\n";
    cin >> num_nik;
    
    val_qtr = 25;   // Values for each coin 
    val_dim = 10;
    val_nik = 5;
    
    amt_qtr = num_qtr * val_qtr; // the monetary amount of quarters
    amt_dim = num_dim * val_dim; // the monetary amount of dimes
    amt_nik = num_nik * val_nik; // the monetary amount of nickels
    
    tot_mon = amt_qtr + amt_dim + amt_nik; // the total amount of money
    
    cout << "In total you have ";
    cout << tot_mon;
    cout << " cents.\n";
    
           

    return 0;
}

