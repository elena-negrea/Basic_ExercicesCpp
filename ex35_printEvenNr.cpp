#include <iostream>

int main(){
    int N = 7; // nr of elements from the array
    int arr[] = {1, 6, 3, 8, 5, 10, 7};

    std::cout << "The even nr in the array are: ";
    for(int i = 0; i < N; i++){
        if(arr[i] % 2 == 0){
            std::cout << arr[i]<< " ";
    
        }
       
    }
     std::cout << std::endl;
     
    return 0;
}