// Implement a basic calculator that takes two numbers and an operator (+, -, *, or /) from the user. 
// Use a switch statement to perform the requested arithmetic operation and display the result.
#include <iostream>

int main(){

    double x, y;
    float result;

    std::cout <<"Enter first number: "<< std::endl;
    std::cin >> x;

    char op = 'A';
    std::cout<<"Enter operator (+, -, *, /): "<< std::endl;
    std::cin >> op;

    while (op != '+' && op != '-' && op != '*' && op != '/')
    {
         std::cout << "Enter +, -, * or /: ";
         std::cin >> op;
    }

    std::cout <<"Enter second number: "<< std::endl;
    std::cin >> y;

     switch(op)
    {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if(y !=0)
            {
                result = x / y;
            }
            else{
                std::cout << "Error! Division by zero is not allowed." << std::endl;
                return 1;
            }
             break;
        default:
            std::cout << "Invalid operator!";
            return 1;
    }

    std::cout <<x <<" "<< op <<" "<< y <<" = "<< result << std::endl;
   
    return 0;
}
