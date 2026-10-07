#include <iostream>

int main(){
    int n = 8; //1000
    int k = 1;

    n = n | (1 << k);

    std::cout << n;

    return 0;

}