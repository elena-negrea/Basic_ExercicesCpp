/*Generate and print the Fibonacci sequence up to N terms.
 The sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding ones (e.g., 0, 1, 1, 2, 3, 5, 8, …).*/

 #include <iostream>

 int main(){
    int n = 8;
    int fibo[101]={0, 1};
    

    for(int i = 1; i<=n; i++)
    {
        fibo[i+1]= (i-1)+ i;
    }
    std::cout << "Fibonacci series: ";
    for(int i = 0; i<=n; i++)
    {
        std::cout << fibo[i] << " ";
    }

    return 0;
 }