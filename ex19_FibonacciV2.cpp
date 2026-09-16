#include <iostream>

long long fibonacci(int n)
{
    if (n == 0)
        return 0; 
    if (n == 1)
        return 1;
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;

    std::cout << "How many numbers of Fibonacci Series?: ";
    std::cin >> n;

    std::cout <<"Fibonacci Series: ";
    for(int i = 0; i < n; i++){
        std::cout << fibonacci(i) << " ";
    }

    /*
    i = 0
→ fibonacci(0)
→ return 0

i = 1
→ fibonacci(1)
→ return 1

i = 2
→ fibonacci(2)
    → fibonacci(1) → 1
    → fibonacci(0) → 0
→ return 1

i = 3
→ fibonacci(3)
    → fibonacci(2)
        → fibonacci(1) → 1
        → fibonacci(0) → 0
    → fibonacci(1) → 1
→ return 2
*/
     return 0;
}