#include <iostream> 

int main(){
     
    int n, v[100];
    std::cout << "enter values: " << std :: endl;
    
    for(int i = 0; i <n; i++){
        std::cin >> v[i];
    }
    bool sorted;
    do{
        sorted = true;
        for(int i = 0; i < n-1; i++){
            if(v[i] > v[i+1]){
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                sorted = false;
            }
        }
    }
    while(!sorted);
    
    return 0;
}