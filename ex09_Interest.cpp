// Write a C++ program to calculate the Simple Interest for a given principal amount, rate of interest, and time period.

#include <iostream>

int main() {

    double principal = 1000, rate = 10, time = 3;
    double si; //Simple Interest
    
    si = (principal * rate * time)/100;
    std:: cout << "\nSimple Iterest (SI) is: "<< si<< std::endl;
    //output: Simple Interest (SI) is: 300

    return 0;
}
