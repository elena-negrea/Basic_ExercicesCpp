#include <iostream>

int main(){
    int n = 12;
    n = n & (n - 1);
    std::cout << n;

    return 0;

}