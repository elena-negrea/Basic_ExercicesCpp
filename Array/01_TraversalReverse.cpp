#include <iostream>

void arrayTraversalReverse(int arr[], int n){
    for(auto it = arr + n; it != arr;){
        --it;
        std::cout << *it << " ";
    }
}

int main(){
    int n = 4;
    int arr[] = {324, 5, 2, 2};
    arrayTraversalReverse(arr, n);

    return 0;
}