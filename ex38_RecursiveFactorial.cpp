//Write a recursive function factorial(int n) to calculate n! (n factorial). Recall that n! = n * (n-1) *...*1, and the base case is 0! = 1.
#include <iostream>

 long long factorial(int n){
    if( n == 0 )
        return 1;
    return n * factorial(n-1);
 }

int main(){
    int n;
    std::cout <<"Enter number to factor(!): ";
    std::cin >> n;
    std::cout << n << "! is: " <<  factorial(n); 

    return 0;
}