#include <iostream>

int main(){

    std::cout << "Enter first integer: ";
    int x, y;
    std::cin >> x;
    std::cout << "Enter second integer: ";
    std::cin >> y;

    std::cout << "The sum is: " << x + y << std::endl;
    std::cout << "The difference is: " << x - y << std::endl;
    std::cout << "The product is: " << x * y << std::endl;
    if(y==0){
        std::cout << "Division by zero is not allowed." << std::endl;
    } else {
        std::cout << "The quotient(integer division) is: " << x / y << std::endl;
    }

    return 0;
}