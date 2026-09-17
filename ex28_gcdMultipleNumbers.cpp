#include <iostream>

int gcd(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){

    int count;
    std::cout <<"How many numbers?: " ;
    std::cin >> count ;

    int number; 
    std::cout << "Enter first number: ";
    std::cin >> number;

    int result = number; 

    for(int i = 2; i <= count; i++){
        std::cout <<"Enter number " << i <<":";
        std::cin >> number;

        result = gcd(result, number);
    }
    std :: cout << "GCD = " << result;

    return 0;
}