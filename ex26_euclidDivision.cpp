#include <iostream> 

int main(){

    int n, m;
    std::cout <<"Enter numbers n & m: ";
    std::cin >> n >> m;
    if( m == 0)
    {
        std::cout << "Division at 0 is not allowed. Retype numbers: ";
        std::cin >> n >> m;
    }

    while(m != 0){
        int r = n % m;
        n = m;
        m = r;
    }
    std::cout <<"gcd = " << n;
    return 0;
}