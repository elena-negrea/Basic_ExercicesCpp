//Create a C++ program that determines whether a given year is a leap year. A leap year has 366 days. (e.g., 2024, 1900).
/*The rules for a leap year are:

Divisible by 4: The year must be evenly divisible by 4.
Exception for centurial years: If the year is divisible by 100, it is not a leap year.
Exception to the exception: If the year is divisible by 100, it is a leap year if it is also divisible by 400. */

#include <iostream>

int main(){
    int year;
    std::cin >> year;

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        std::cout << year << " is a Leap Year" << std::endl;
    else
        std::cout << year << " isn't a Leap Year" << std::endl;

    //Output: 2024 is a Leap Year
    return 0;

}