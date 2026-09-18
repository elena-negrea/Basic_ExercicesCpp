#include <iostream> 

void print_Arr(int v[100], int n)
{
    std::cout << " array elements: ";
    for(int i = 0; i < n; i++)
        std::cout << v[i] << " ";
    std::cout << std::endl;

}


int main(){
    int n = 8;
    int X[100] ={1, 4, 5, 2, 7, 8, 3, 9};
    print_Arr(X,n);

    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++)
        {
            if(X[i] > X[j])
            {
                int aux = X[i];
                X[i] = X[j];
                X[j] = aux;
            }
        }
    }
     print_Arr(X,n);
    return 0;
}