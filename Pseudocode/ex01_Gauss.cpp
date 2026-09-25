#include <iostream>

int main(){
    int n;
    std::cout << "Citeste n: ";
    std::cin >> n;

    int s = 0;
    for(int i = 1; i <=n; i++){
        int a = 0, b = 1, j = 1;
        while(j<i)
        {
            int r = 2*b-a;
            a = b;
            b = r;
            j++;
        }
        s += b;
    }

    std::cout<< "Rezultat: "<< s;

    return 0;
}