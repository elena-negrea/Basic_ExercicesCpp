//Write a C++ program to count a total number of digits in a number.
#include <iostream>
int main(){
    long long N; //would work just for a number with max 19 digits
    std::cout << "Enter number: ";
    std::cin >> N;
    long long originalNumber = N;
    int cnt = 0;
    if(N==0)
    {
        cnt = 1;
    }
    while(N>0 || N < 0)
    {
        N = N /10;
        cnt ++;
    }
    std::cout << "Given integer: "<< originalNumber << std::endl;
    std::cout << "The number of digits in "<< originalNumber <<" is " << cnt <<  std::endl;

    //Output: Given integer: 4829 The number of digits in 4829 is: 4
    return 0;
}