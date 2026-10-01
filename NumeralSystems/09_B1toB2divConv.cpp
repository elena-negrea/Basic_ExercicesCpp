#include <iostream>
#include <cmath>

int main(){
    
    int number;          // numarul initial
    int sourceBase;      // baza initiala
    int targetBase;      // baza in care vrem conversia
    int k;               // exponentul: bigBase = smallBase^k
    int result;          // rezultatul conversiei


     
//input 

    std::cout << "Enter the number and it's base: ";
    std::cin >> number >> sourceBase;
    std::cout << std::endl;

    std::cout << "Enter the conversion base: ";
    std::cin >>  targetBase;
    std::cout << std::endl;

    std::cout<< "Initial number: " << number << " base " << sourceBase << std::endl;

// validate input 

    //we check if the bases are 0 or bigger - we dont make for now the 16 number system with A,B...
    while(targetBase > 10){
        std::cout << "Invalid input. Try again.";
        std::cin.clear();
        std::cin.ignore(100, '\n');
        std::cout << "Enter the coversion base: " ;
        std::cin >> targetBase;
        std::cout << std::endl;
    }

    

//check if bases are related: bigBase = smallBase^k
    // I need function for checking how much is k in  d = b^k

 //if small -> big
        // grouping

    /*if:
    n(b) -> m(d), where d = b^k, we group n
    
        I need function?
        */

//else if big -> small
        // expanding

    /*else if:
    n(d) -> m(b), where d = b^k, we result a group fromthe digits of m */


    /*else: 
     n !div with d => base b ->  base 10->  base d
        function B1toB2Conv.cpp */
//else
    // sourceBase -> 10 -> targetBase       


    return 0;
}