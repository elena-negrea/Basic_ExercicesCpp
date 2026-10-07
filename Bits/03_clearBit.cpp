#include <iostream>

int main(){
    int n = 14; //1110
    int k = 2;

   n = n & ~ (1 << k);
   std::cout << n;

    return 0;

}