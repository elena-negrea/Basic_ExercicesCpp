#include <iostream>

void arrayTraversalReverse(int arr[], int n){
    for(int i = n-1; i >= 0; i--){
        std::cout << arr[i] << " ";
    }
}

int main(){
    int n = 4;
    int arr[] = {324, 5, 2, 2};

    arrayTraversalReverse(arr,n);

    return 0;
}