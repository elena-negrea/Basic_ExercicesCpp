#include <iostream>

void bubbleS(){


    
}
void read(int* v[n], int n){

    std::cout<<"Enter values: v[0]=";
    for(int i = 0; i<n; i++){
        std::cout<<"v[" << i << "]=";
        std::cin>> v[i];
        std::cout<<", "<<std::endl;

    }
}
void write(){
    
}

int main(){

    int n;
    std::cout  <<"Enter number of values:";
    std::cin >> n;
    std::endl;
    int v[n];
    read(*v[n], n);
    write{};

    bubbleS{};
    write{};
    return 0;
}