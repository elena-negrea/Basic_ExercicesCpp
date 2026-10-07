#include <iostream>

int main(){

    int n = 17; 
    if( n > 0 && (n & (n-1)) == 0 )
        std:: cout << "true";
    else
        std:: cout << "false";
    return 0;
}