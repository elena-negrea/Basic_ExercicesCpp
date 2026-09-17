/*Write a program to reverse the order of the elements in the array
 and then print the reversed array. (e.g., [1, 2, 3, 4] becomes [4, 3, 2, 1]).*/

 #include <iostream>

int main(){
    int number[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(number)/sizeof(number[0]); // total bytes of the array / bytes of one element = number of elements
    int i = 0;
    int reverse_number[6];
   
    for(int j = size-1; j >= 0; j--)
    {
        reverse_number[i] = number[j];
        i++;
    }
   
    std::cout << "Initial array: ";
   for(int i = 0; i < size; i++)
   {
    std::cout << number[i] << " ";
   }
   std::cout << std::endl;
   std::cout << "Reverse array: ";

   for(int i = 0; i < size; i++)
   {
    std::cout << reverse_number[i] << " ";
   }
    return 0;
}