#include<iostream>


int main()
{
    int n = 10; //1010 in binar
    int k = 3; // the position to check 

    if( n & (1 << k)){
        std::cout << "Found 1";
    }
    else
        std::cout << "Found 0";

    return 0;
}
