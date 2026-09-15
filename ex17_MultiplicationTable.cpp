/* Given an integer N. Use a loop to generate and print the multiplication table for N up to 10 multiples (i.e., N*1, N*2, ….. N*10).*/
#include <iostream>

int main(){
    int number, maxi = 10;
    std::cout <<"Multiplication Table for number: "<<std::endl;
    std::cin >> number; 

    for(int i = 1; i <= maxi; i++)
        std::cout << number << " * " << i << " = "<< (number*i) <<std::endl;

    return 0;
}