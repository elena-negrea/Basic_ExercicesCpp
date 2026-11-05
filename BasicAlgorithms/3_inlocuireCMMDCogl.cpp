#include <iostream>
#include <vector>

void citire(std::vector<int>& v, int n){// using & = the vector is sent by reference, so is modified directly at the adress

    for(int i = 0; i<n; i++){

        std::cin >>v[i] ;
        
    }
}
void afisare(std::vector<int>& v, int n){//output requested right to left
    for(int i = n-1; i>=0; i--){
        std::cout << v[i] << " ";
    }
}

int oglindit(int a){

    int ogl = 0;
    while(a > 0){
            ogl = ogl * 10 + ( a % 10);
            a /= 10;
    }
    return ogl;
}

int cmmdc(int a, int b){
   
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
  
    int n;
    std::cin >> n; //number of values

    std::vector<int> w(n);//the elements mirrored
    std::vector<int> v(n);//the original elements

    citire(v, n);
    
    for(int i = 0; i < n; i++){

        w[i] = oglindit(v[i],n);
        v[i] = cmmdc(v[i],w[i]);
    }

    afisare(v, n);

    return 0;
}