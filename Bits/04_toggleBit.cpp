#include <iostream>

int main(){
    int n = 10; // 1010
    int k = 0;
    n = n ^ (1 << k);
    std::cout << n;

    return 0;

}