//Write a C++ program to swap the values of variables A and B without using a temporary variable.
#include <iostream>

int main()
{
    int a = 2, b = 6;
    
    a = a*b;
    b = a/b;
    a = a/b;
    std :: cout << a << " " << b;

    /*
    a = a + b;
    b = a - b;
    a = a - b;
    */
    return 0;
        
}