#include <iostream> 

void printArray(const int arr[], int size){
    for (int i = 0; i < size; ++ i){
        std::cout <<arr[i] << (i < size-1 ? "," : ""); // virgula se pune doar dacă elementul curent nu este ultimul.
    }
    std::cout << std::endl;
}


int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(arr[0]); // total bytes of the array / bytes of one element = number of elements
    int aux;
    /*Output:
    Array BEFORE swap: 10 20 30 40 50 
    Array AFTER swap: 50 20 30 40 10*/

    std::cout << "Array before swap: ";
    printArray(arr, size); 

    aux = arr[0];
    arr[0] = arr[size-1];
    arr[size-1] = aux;

    std::cout<< "Array after swap: ";
    printArray(arr, size);

    return 0;


}