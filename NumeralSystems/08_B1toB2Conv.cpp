#include <iostream>
#include <cmath>
int main(){

    //base b -> base 10
    int n = 347, b1 = 8, digits = 3;
    std::cout<< "Initial number: " << n << " base " << b1 << std::endl;

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

    std::cout<< "Into base 10 : " << n2 << std::endl;

    //bse10 to base2
    int b2 = 2;

    //we use the divizion method:  45 : 2 = 22,1; 22 : 2 = 11,0 .... 

    //so we need the quotient and remains. quotient = n; first we find out the remaind by %, next we divide the quotient
  
    int quotient = n2;
    int arr[65];
    int i = 0;

    while(quotient){
        arr[i] = quotient % b2;
        quotient = quotient / b2;
        i++;
    }
    std::cout << "number in base 2 : ";
   for(int j = i - 1; j>=0; j --){
        std::cout << arr[j];
   }

    return 0;
}