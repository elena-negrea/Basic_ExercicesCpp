//Write a C++ program to swap the values of variables A and B using a temporary variable.

#include <iostream>


int main(){
    int a = 10, b =21, aux;
    aux = a;
    a = b;
    b = aux;

    std:: cout <<"a = "<< a <<" "<<"b = "<< b;
    return 0;
}


