//Write a program that uses the C++ language feature to determine and print the size, in bytes, of the four fundamental data types: char, int, float, and double.
#include <iostream>
int main(){

    char letter;
    int number;
    float numberF;
    double numberD;

    std::cout << "Enter a letter: " << std::endl;
    std::cin >> letter;

    std::cout << "Enter an integer: " << std::endl;
    std::cin >> number;

    std::cout << "Enter a float number: " << std::endl;
    std::cin >> numberF;

    std::cout << "Enter a double number: " << std::endl;
    std::cin >> numberD;

    std::cout << "Size of char: " << sizeof(letter) << std::endl;
    std::cout << "Size of interger: " << sizeof(number) << std::endl;
    std::cout << "Size of float number: " << sizeof(numberF) << std::endl;
    std::cout << "Size of double number: " << sizeof(numberD) << std::endl;

    return 0;
}

