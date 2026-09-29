#include <iostream>
#include <cmath>
int main(){

    //base b -> base 10
    int n = 347, b1 = 8, digits = 3, b2 = 2;
    std::cout<< "Initial number: " << n << " base " << b1 << " into base " << b2 << std::endl;
//the ideea: b = 2^3, groups of k = 3 bits, starting from right
//convert each group into one digit in base2
//every digit from the n base b would be transformed into 3 bits 3 = 011 how? we use the division method

    //we use the divizion method:  3 : 2 = 1,1; 1 : 2 = 0,1 => 3(8) = 011(2); 

    //so we need the quotient and remains. quotient = n; first we find out the remaind by %, next we divide the quotient
    int n2 = 0;//n-am nev
    int quotient = n;
    int arr[65];
    int i = 0;

    while(quotient){
        arr[i] = quotient % b2;
        quotient = quotient / b2;
        i++;
    }
    std::cout << "number : ";
   for(int j = i - 1; j>=0; j --){
        std::cout << arr[j];
   }


    return 0;
}