/**
 * Problem 1: Digit Check -Assignment 1
 * Randy Randall
 * */

#include <iostream>

using namespace std;

int main () {

    int n; //input number variable

    cout << "Enter a four digit number: ";
    cin >> n;
    cout << "\n";

    int ones = n%10; 
    int tens = (n/10)%10;
    int hundreds = (n/100)%10;
    int thousands = (n/1000);
    
    cout << thousands << " Thousand(s)" << endl;
    cout << hundreds << " Hundreds(s)" << endl;
    cout << tens << " Ten(s)" << endl;
    cout << ones << " One(s)" << endl;



    return 0;

}
