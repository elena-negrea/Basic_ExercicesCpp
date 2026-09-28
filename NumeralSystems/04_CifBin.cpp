//Se citește un număr natural n. Să se determine câte cifre 0 și câte cifre 1 are reprezentarea în baza 2 a acestui număr.

#include <iostream>

int main(){
    int number;
    std::cout << "Enter number: ";
    std::cin >> number;
    std::cout << std::endl;

    int originalbase = 10; //natural numbers they ask

    int quotient = number; 
    int reminder, base2 = 2;
    int i = 0;
    int arr[65];

    while(quotient){
       reminder = quotient % base2 ;
       arr[i] = reminder;
       i++;
       quotient /= base2; 
    }
    std::cout << "The number in base 2 is: ";
    for (int j = i - 1; j >= 0; j--){

        std::cout << arr[j];
    }
    std::cout << std::endl;

    int z = 0;
    int u = 1;
    int cntZ = 0, cntU = 0 ;

    for (int j = i - 1; j >= 0; j--){
        if(arr[j]== z)
            cntZ++;
        else if(arr[j] == u)
            cntU++;
    }
    
    std::cout << "The 0 figures found in " << number << " as base 2 are: " << cntZ << std::endl;
    std::cout << "The 1 figures found in " << number << " as base 2 are: " << cntU; 

    return 0;

}