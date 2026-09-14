//Create a program that accepts a single character input from the user.
// It should then print the decimal integer value that corresponds to that character in the ASCII (American Standard Code for Information Interchange) table.
#include <iostream>

int main()
{
    char ch; 
    std::cout << "Enter a single character: "<< std::endl;
    std::cin >> ch; // being single character, has input of single ch

    //Cast the char into an in, wich is the ASCII value of the character
    int asciiValue = (int)ch;  //explicit type conversion or casting.

    std::cout << "The ASCII value of " << ch << " is: " << asciiValue << std::endl;

    return 0;
}