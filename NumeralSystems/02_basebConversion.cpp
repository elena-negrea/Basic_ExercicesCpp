// from any base b to any base d
#include <iostream>
#include <cmath>

int main(){
    int number, base1, base2, base10 = 10;
    int arr2[65]; //store the reminder for base10 -> base d

    std::cout << "Enter the number and it's base: ";
    std::cin >> number >> base1;
    std::cout << std::endl;

    std::cout << "Enter the conversion base: ";
    std::cin >> base2;
    std::cout << std::endl;

    //bcs the number system for 16 for example is witrh ABCDF... i will ignore those for now
    while(base2 > 10){
        std::cout << "Invalid input. Try again.";
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "Enter the coversion base: " ;
        std::cin >> base2;
        std::cout << std::endl;
    }

    //we transform the number in base1 into base 10 and we have a new nr 

    int pos = 0, cif, number_coverted10 = 0;

    int number_copy = number;

    while(number_copy)
    {
        cif = number_copy % 10;
        number_coverted10 = cif * pow(base1, pos) + number_coverted10;
        number_copy /=10;
        pos++;
    }

    std::cout <<"UPDATE: the number " << number << " coversed to base(10) is: " <<  number_coverted10;
    std::cout << std::endl;


    //we transform the new number in base 10 into baseD 
    int nr_converted10_copy = number_coverted10;
    int final_number = 0;
    int i = 0, reminder;

    while( nr_converted10_copy){
        reminder =  nr_converted10_copy % base2 ;
        arr2[i] = reminder;
        i++;
        nr_converted10_copy /= base2; 
    }
    //show the number
    
     std::cout <<"The number " << number <<  "coversed to base " << base2 <<" is: ";
   
    for(int j = i -1; j >= 0; j--){
        final_number = final_number *10 + arr2[j];
        std::cout << arr2[j];
    }
     std::cout << std::endl; 


    std::cout <<"Conversions: initial number" << number << "with base" << base1 <<" into base 10 : " << number_coverted10 << " and into base " << base2 << ": " << final_number;

    return 0;
}