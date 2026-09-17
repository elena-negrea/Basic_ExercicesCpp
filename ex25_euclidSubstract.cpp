/*
#include <iostream>

int main(){

    int n, m, cpyn, cpym;
    
    std::cout <<"Enter numbers: ";
    std::cin >> n >> m;
    cpyn = n;
    cpym = m;
    while(n != m)
    {
        if(n > m){
            n = n - m;}
        if(n < m){
            m -= n;}
    }
    std::cout << "gcd("<< cpyn <<","<< cpym << ") = " << n;
    return 0
}
*/
#include <iostream>
#include <algorithm> // Needed for std::min (optional, can use if/else)

int main() {
    int A = 50, B = 15;
    int gcd = 1;

    int minimum = std::min(A, B); 

   
    for (int i = 1; i <= minimum; ++i) { // Loop from 1 up to the minimum number
      
        if (A % i == 0 && B % i == 0) {  // Check if i divides both A and B evenly
            gcd = i; // Store the largest common divisor found so far
        }
    }

    std::cout << "The GCD of " << A << " and " << B << " is: " << gcd << std::endl;

    return 0;
}