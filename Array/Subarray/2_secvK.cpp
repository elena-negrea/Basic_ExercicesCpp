//Să se determine o secvență de elemente de lungime k cu suma elementelor maximă.
/*input: n = nr de valori si k = nr de valori dintr-o secventa, apoi x = valorile date*/
#include <iostream>

int main(){
    int n = 8; 
    int k = 3; 
    int a[n] = {5, 6, 1, 2, 6, 6, 4, 3};//index from 0

    int stg = 0, dr = 0;
    int max_sum = 0;

     for(int i = 0; i <= n-k; i++){// 
       
        int sum = a[i]+ a[i+1] + a[i+2];
        if(sum > max_sum){
            stg = i;
            dr = stg + 2;
            max_sum = sum;
        }

    }
    
    std::cout << "max sum = " << max_sum << std::endl;
    std::cout << "the values : ";
    for(int i = stg; i <= dr; i++)
        std::cout << a[i] << " ";

    return 0;
}