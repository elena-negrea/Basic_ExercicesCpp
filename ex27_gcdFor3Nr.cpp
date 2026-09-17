//gcd for 3 numbers

#include <iostream>

int main(){
    int n, m, p; 
    std::cout << "Enter 3 numbers: " ;
    std::cin >> n >> m >> p;
     if( m == 0 || p == 0)
    {
        std::cout << "Division at 0 is not allowed. Retype all numbers: ";
        std::cin >> n >> m >> p;
    }

    int cpyn = n, cpym = m, cpyp = p; // for cout
    int cpycpyn = n, cpycpym = m, cpycpyp = p; // for second calculation

    //determinam GCD dintre primele doua nr
    while(m != 0){
        int r = n % m;
        n = m;
        m = r;
    }
    int gcdFirstPair = n;

    std::cout <<"gcd(" << cpyn << "," << cpym << ") = " << gcdFirstPair << std:: endl; 

    int firstGcd = n; 
    // determiam GCD intre cmmdc anterior si al treilea numar 

    while(p != 0)
    {
        int r = gcdFirstPair % p ;
        gcdFirstPair = p;
        p = r;
    }
    int gcdSecondPair = gcdFirstPair; 
    std::cout << "gcd(gcd(" << cpyn << "," << cpym << ")," << cpyp << ") = " << gcdSecondPair;

    return 0;
}