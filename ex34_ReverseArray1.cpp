#include <iostream>

void printArray(const int arr[], int size){
    for (int i = 0; i < size; ++ i){
        std::cout <<arr[i] << (i < size-1 ? "," : ""); // virgula se pune doar dacă elementul curent nu este ultimul.
    }
    std::cout << std::endl;
}

int main(){
    const int N = 6;
    int arr[N] = {10, 20, 30, 40, 50, 60};

    std::cout << "Original Array: ";
    printArray(arr, N); 

    for(int i = 0; i < N / 2; ++i){     //i = 0 atunci N - 1 - i = 6 - 1 - 0 = 5
        int temp = arr[i];              //i = 2 atunci N - 1 - i = 6 - 1 - 2 = 3
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }
    /*  i        N - 1 - i
        0   <->      5
        1   <->      4
        2   <->      3*/

    std::cout << "Reversed Array: ";
    printArray(arr, N);

    return 0;
}