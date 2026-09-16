//Given an integer N representing the height.
// Use nested loops to print a right-angled triangle pattern of asterisks (*) where the i-th row has i asterisks.
#include <iostream> 

int main(){
    int N = 4;
    char star = '*';
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            std::cout << star << ' ';
        }
        std::cout << std::endl;
    }

}