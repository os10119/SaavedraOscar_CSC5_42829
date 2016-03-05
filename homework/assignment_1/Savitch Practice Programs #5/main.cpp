
/* 
 * File:   main.cpp
 * Author: Oscar Saavedra
 * Created on March 4, 2016, 12:28 PM
 * Purpose: Program for #5 of Savitch chapter 1
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) 
{

    int tot_len, width, height; 
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the width of your rectangle:\n";
    cin >> width;
    
    cout << "Enter the height of your rectangle:\n";
    cin >> height;
    
    tot_len = (width * 2) + (height * 2);
    
    cout << "If a rectangular area has a width of ";
    cout << width;
    cout << " feet,\n";
    cout << "and a height of ";
    cout << height;
    cout << " feet,\n";
    cout << "then the total length of fencing you would need to enclose it is ";
    cout << tot_len;
    cout << " feet.\n";
    
    return 0;
}

