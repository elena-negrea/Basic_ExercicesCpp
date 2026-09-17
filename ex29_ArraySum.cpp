/*Write a program that first asks the user for the number of elements, N, they wish to store. 
Then, read N integers into an array. Finally, use a loop to calculate and display the sum of all elements in the array.
Expected Output:
Enter the number of elements (N): 5
Enter 5 integers:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50

The sum of all elements in the array is: 150
*/
/*First Version 
#include <iostream> 

int main(){
    int n;
    std::cout << "Enter the number of elements (n): ";
    std::cin >> n;

    int arr[n], sum = 0;
    std::cout<<"\nEnter "<<n << " integers:" << std::endl;
    for(int i =1; i <= n; i++){
        std::cout << "Element " << i << ":" ;
        std::cin >> arr[i];

        sum+= arr[i];
        std::cout <<"Current sum: "<< sum << std::endl;
    }
    std::cout<<"The sum of all elements is: "<< sum;
    return 0;
}
    */

#include <iostream>
#include <vector> 

int main(){
    int N;
    long long sum = 0; 
    std::cout << "Enter the number of elements (N): ";
    std::cin >> N;

    std::vector<int> arr(N); 
    std::cout<<"\nEnter " << N << " integers:" << std::endl;

    for(int i = 0; i < N; ++i){
        std::cout << "Element " << i + 1 <<  ": ";
        std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout <<"\nThe sum of all elements is: " << sum << std::endl;

    return 0;
}
