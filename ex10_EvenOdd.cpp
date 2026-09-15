// Write a C++ program that determine whether the given number is even or odd.
#include <iostream>

int main(){
    int number;
    std::cout << "Enter an interger: ";
    std::cin >> number;
    if(number==0)
    {       
       std::cout << number << "is 0"<< std::endl;
    }
    else if (number%2==0)
        std::cout << number << " is an EVEN number"<< std::endl;
    else
     std::cout << number << " is an ODD number"<<std::endl;

    return 0;
}