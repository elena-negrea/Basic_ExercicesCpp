#include <iostream>
#include <cmath>
int main(){

    //base b -> base 10
    int n = 231, b1 = 10, b2 = 2;
    //we use the divizion method:  45 : 2 = 22,1; 22 : 2 = 11,0 .... 

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