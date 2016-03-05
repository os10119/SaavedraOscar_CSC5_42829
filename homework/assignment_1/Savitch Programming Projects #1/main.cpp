/* 
 * File:   main.cpp
 * Author: Oscar Saavedra
 * Created on March 4, 2016, 1:25 PM
 * Purpose: Program for #1 in the programming projects in Savitch Ch. 1
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{

    int fst_num, sec_num, sum_num, pdt_num; //fst_num = first integer, sec_num = second integer, sum_num = sum of both, pdt_num = product
    
    cout << "Press return after entering a number.\n";
    cout << "Choose an integer from 1-100.\n";
    cin >> fst_num;
    
    cout << "Choose another integer from 1-100.\n";
    cin >> sec_num;
    
    sum_num = fst_num + sec_num; // my equations for the calculations
    pdt_num = fst_num * sec_num;
    
    cout << "The sum of your two integers equals ";
    cout << sum_num;
    cout << ".\n";
    cout << "The product of your two intergers equals ";
    cout << pdt_num;
    cout << ".\n";
    cout << "This is the end of the program.\n";
    return 0;
}

