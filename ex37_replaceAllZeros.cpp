// Given an array, write a C++ program to replace all occurrences of the number 0 with the value -1. Print the modified array.
#include <iostream>

int main(){
    int arr[] = {1, 0, 5, 0, 8, 0, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    std::cout << "Original array: ";
    for(int x : arr){
        std::cout<< x << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < size; ++ i){
        if(arr[i] == 0){
            arr[i] = -1;
        }
    }
    std::cout << "Modified array: ";
    for(int x : arr){
        std::cout << x << " ";
    }
    std::cout << std ::endl;

    return 0;
}
/*

void printArray(const int arr[], int size){
    for (int i = 0; i < size; ++ i){
        std::cout <<arr[i] << (i < size-1 ? "," : ""); // virgula se pune doar dacă elementul curent nu este ultimul.
    }
    std::cout << std::endl;
}

int main(){
    int numbers[] = {1, 0, 5, 0, 8, 0, 2};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    std:: cout << "Original array: ";
    printArray(numbers, size);

    for(int i = 0; i < size; i++)
    {
        if(numbers[i] == 0)
            numbers[i] = -1;
    }

    std::cout <<"Modified Array: ";
    printArray(numbers, size);

    return 0;
}

*/