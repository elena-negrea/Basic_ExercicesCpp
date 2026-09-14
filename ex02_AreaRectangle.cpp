#include <iostream>

int main() {
    
    std::cout << "Enter the length of the rectangle: ";
    double length, width;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    std::cout << "The Area of the rectangle is: length * width = "<< length * width << std::endl;

    return 0;
}