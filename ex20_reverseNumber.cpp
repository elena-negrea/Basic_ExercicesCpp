//Write a C++ program to reverse a given integer number. For instance, if the input is 12345, the output should be 54321.
#include <iostream>

int main()
{
    /*
    int number = 12345, reversed = 0;

    int originalNumber = number;

    while(number > 0){
        int digit = number % 10;
        reversed = (reversed * 10) + digit;
        number/= 10;
    }
    std::cout<< "the reverse of " << originalNumber << " is " << reversed << std::endl;
    */
    
    int a = 12345;
    int aux = 0;
    int inverse = 0;
    
    while(a!=0)
    {
        aux = a % 10;
        a /= 10;
        inverse = inverse*10 + aux;
    }
    std::cout << inverse;
    

    return 0;
}