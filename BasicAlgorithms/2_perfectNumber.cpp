#include <iostream> 

int main(){

    int n, s = 0;
    std::cin >> n;

    for(int j = 1; j*j <=n; j++){

        if(n%j == 0){

            int d = n/j;
            if(d==j)
            {
                s+= j;
            }
            else if(d == n){
                s+= j;
            }
            else
                s+= j + d;
            }
    }
    if(s == n){
        std::cout << "n este perfect";
    }
    else
        std::cout << "n nu este perfect";

    return 0;
}