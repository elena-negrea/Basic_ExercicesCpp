/*Generate and print the Fibonacci sequence up to N terms.
 The sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding ones (e.g., 0, 1, 1, 2, 3, 5, 8, …).*/

 #include <iostream>

 int main(){
    int n ;
    std::cin >> n;

    long long a =0, b =1; 
    long long nextTerm;

    std::cout <<"Fibonacci Series: "<< std::endl;

    if (n >= 1){
        std::cout << a;
    }
    if (n >= 2){
        std::cout << ", " << b;
    }

    for (int i = 3; i <= n; ++i)
    {
        nextTerm = a + b;
        std::cout << ", " << nextTerm;
         a = b;
         b = nextTerm;
    }
    std::cout << std::endl;

    return 0;
 }