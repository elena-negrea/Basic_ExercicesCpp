#include <iostream>

int main(){
    int n = 12; // 1100
    n = n & -n;
    std::cout << n;

    return 0;
}