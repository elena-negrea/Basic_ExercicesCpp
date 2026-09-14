//Develop a C++ program that calculates and displays the arithmetic average (mean) of three given numbers.
#include <iostream>

int main() {
double num1, num2, num3;
double average;

std::cout << "Enter three numbers to average: ";

std::cin >> num1 >> num2 >> num3;

average = (num1 + num2 + num3)/ 3.0;

std::cout <<"The average of the three numbers is: "<< average << std::endl;

return 0;
}