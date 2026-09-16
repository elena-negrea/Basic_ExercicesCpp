#include <iostream>

int main(){
    int n;
    std::cout << "How many numbers of Fibonacci Series?: ";
    std::cin >> n;

    long long a = 0;
    long long b = 1;

    for(int i = 0; i < n; i++)
    {
        std::cout << a << " ";

        long long next = a + b;
        a = b;
        b = next;
    }
    return 0;
}