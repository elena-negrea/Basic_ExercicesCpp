//Use a for loop to calculate and display the sum of all natural numbers from 1 up to and including a given number N.
#include <iostream>

int main(){
    int number, sum = 0;
    std::cout << "Enter number: " << std::endl;
    std::cin >> number;

    for(int i = 1; i <= number; i++)
    {
        sum += i;
    }

    std::cout << "The sum of natural numbers up to "<< number <<" is: "<< sum;

    return 0;
}