// Write a C++ program to traverse the entire array and find the single largest element (the maximum value) stored within it.
#include <iostream>

int main(){

    int arr[5] = {10, 30, 40, 60, 20};
    int max_val = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]); // imi ia dimensiunea in bytes(20) si o impartim la dimensiunea tipului(4) => 5 elemente

    for(int i = 1; i < size; i++){

        if(arr[i] > max_val)
            max_val = arr[i];
    }

    std::cout << "The largest numbers in the array is: "<< max_val;
    return 0;
}