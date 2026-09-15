//Write a C++ program to determine and display the largest number among the given three numbers.
#include <iostream>

int main(){
    int a = 10, b = 40, c = 30;
    //we could just compare between them. But if we would have more variables then i would use an array and for

    if(a >= b && a >= c)
        std::cout << a << " is the largest number";
    else if(b >= a && b >= c)
        std::cout << b << " is the largest number";
    else 
         std::cout << c << " is the largest number";
  


    //Output: 40 is the largest number
    return 0;
}