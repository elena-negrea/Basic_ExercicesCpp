#include <iostream>
#include <cmath>
int main(){

    //base b -> base 10
    int n = 11111, b1 = 2, b2 = 10, digits = 6;
    //we use the powers method: 101101(2)= 1*2^5 + 0*2^4 + .. =  45(10)
    // web can do from the first digit or from the last
    int n2 = 0;
    //from the last : n2 = n2+ pow(b1, i)
    for(int i = 0; i < digits; i++) // i = exponent
    {
        int cif = (n % 10) * pow(b1,i);
        n=n/10;
        n2 = n2 + cif;
    }

    std::cout<< " -> " << n2;
    return 0;
}