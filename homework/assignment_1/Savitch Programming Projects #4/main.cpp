/* 
 * File:   main.cpp
 * Author: Oscar Saavedra
 * Created on March 4, 2016, 3:19 PM
 * Purpose: Determine how far an object travels when you input a time(in seconds).
 */ 

#include <iostream>

using namespace std;


int main(int argc, char** argv) 
{
    int in_tim; // input time variable
    
    int dis_trv; // the distance traveled
    
    int acc_grv; // acceleration
    cout << "Press return after entering a number.\n";
    cout << "Enter a time, in seconds:\n";
    cin >> in_tim;
    
    acc_grv = 32; // acceleration due to gravity @ 32 ft per second
    
    dis_trv = (acc_grv * (in_tim * in_tim)) / 2; // equation for finding the distance
    
    cout << "If an object is in the air, in freefall, for a total of ";
    cout << in_tim;
    cout << " seconds,\n";
    cout << "then it has dropped a total distance of ";
    cout << dis_trv;
    cout << " feet.\n";
    
    

    return 0;
}

