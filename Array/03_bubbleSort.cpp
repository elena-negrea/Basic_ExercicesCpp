#include <iostream>

void print_Arr(int v[100], int n){
    std::cout << " array elements: ";
    for(int i = 0; i < n; i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;

}


int main(){
    int n = 6;
    int v[101]= {1, 20, 13, 14, 5, 8};
    print_Arr(v, n);

    bool sortat;
    do
    {
        sortat = true;
        for(int i  = 0; i < n-1; i++)
        {
            if(v[i] > v[i+1])
            {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux; 
                sortat = false;

            }
        }
    }
    while(!sortat);

    print_Arr(v,  n);

    return 0;
}