#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 3;

    n = n & 1; //keeps just the last bit of n 
    cout << n << endl;

    n = n << 4;

    cout << n << endl;

    n =( n << 4) & ((n << 4) - 1 );
    cout << n;

    return 0;
}
