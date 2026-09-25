#include <iostream>

int main(){

    int n;
    std::cin >> n;
    int m = 0;
    do {
        int c = n % 10;
        n = n/10;
        if(c>5)
            c = c/2;
        m = m*10 +c;
    }
    while (n!=0);
    std::cout << m;

    return 0;
}