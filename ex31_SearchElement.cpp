/*Write a C++ program to search a target value in a given array.
If it exists, print the index (position) where it was first found; otherwise, 
indicate that the element was not found.*/

#include <iostream> 

int main(){
    int arr[5] = {10, 30, 40, 60, 20};
    bool found = false;
    int target, size = 5;
    
    std::cout << "Enter target: ";
    std::cin >> target;

    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            std::cout << "The target was found at position(index start 0): " << i;
            found = true;
            break;
        }
    }
    if(!found)
     std::cout << "The target was not found";

    return 0;
}