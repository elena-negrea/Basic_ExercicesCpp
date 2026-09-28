#include <iostream>

int main(){

    int number, base1, base2;
    int arr[65]; //store the reminder

    std::cout << "Enter the number and it's base: ";
    std::cin >> number >> base1;
    std::cout << std::endl;

    std::cout << "Enter the conversion base: ";
    std::cin >> base2;
    std::cout << std::endl;

    while(base2 > 10){
        std::cout << "Invalid input. Try again.";
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "Enter the coversion base: " ;
        std::cin >> base2;
    }
    std::cout << std::endl;
    std::cout << "Conversion number " << number << " base " << base1 << " in base " << base2 <<" is: ";

    int quotient = number; 
    int reminder;
    int i = 0;

    while(quotient){
       reminder = quotient % base2 ;
       arr[i] = reminder;
       i++;
       quotient /= base2; 
    }

    for (int j = i - 1; j >= 0; j--){
        std::cout << arr[j];
    }
    std::cout << std::endl;
    
    return 0;
}