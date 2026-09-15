/*Write a C++ program that calculates the factorial of a non-negative integer N. 
The factorial of N (written as N!) is the product of all positive integers 
less than or equal to N (e.g., 5! = 5*4*3*2*1 = 120). Note that 0! = 1.*/
#include <iostream>

int main(){

    int n;
    long long factorial = 1;

    std::cout << "Enter factorial: ";
    std::cin >> n;

    if(n<0)
    {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }
   
    for(int i = n; i >= 1; --i)
    {
        factorial *= i;
    }
    std::cout << "Factorial of "<< n << "! is : " << factorial;
    //Expected Output: Factorial of 5 is : 120
    return 0;
}