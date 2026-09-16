#include <iostream> 

int main(){
    int n;
    std::cout << "How many numbers of Fibonacci Series?: ";
    std::cin >> n;
    long long fibo[101]={ 0, 1};
    

    for(int i = 2; i<=n; i++)
    {
         fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    std::cout << "Fibonacci series: ";
    for(int i = 0; i<n; i++)
    {
        std::cout << fibo[i] << " ";
    }

    return 0;
}