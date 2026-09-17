#include <iostream> 

int main(){
    int n;
    std::cin >> n;

    for(int d = 1; d * d <= n; d++){
        if(n % d == 0){
            std:: cout << " Divisor: " << d;
            if(d * d < n){ //is here to not show twice the same divisor when n is perfect square (36/6 = 6, we take just once the 6)
                std::cout << " -> Pair: " << n/d <<  std::endl;}
        }
    }
    return 0;
}