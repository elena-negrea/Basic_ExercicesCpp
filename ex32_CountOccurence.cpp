/*Given an array, write a program to count and print how many times the number 3 appears in the array.

Given:

int numbers[] = {10, 20, 30, 40, 50};
int target = 3;
*/
#include <iostream>

int main(){
    int number[] = {10, 20, 30, 40, 50, 30};
    int size = sizeof(number)/sizeof(number[0]); // total bytes of the array / bytes of one element = number of elements
    int target = 30;
    int count = 0;
    for(int i = 0; i < size; i++){
        if(target == number[i]){
            count++;
        }
    }

    std::cout << "Number of times number " << target << " appears in the array: " << count;

    return 0;
}