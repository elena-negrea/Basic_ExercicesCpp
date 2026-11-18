#include <iostream>

// Find the longest consecutive subarray with sum ≤ 12.
int main(){
    int a[] = {5, 6, 1, 2, 6, 6, 4, 3};
    int n = 8;
    int S = 12;//max target
    int best_sum = 0;

    int left =0, sum =0, max_length =0; //
    for( int right =0; right < n; right++){
        sum += a[right];//total sum of a[elements]

        while(sum > S){ //ig bigger we cut the most left value and increase the position of left
            sum -= a[left];
            left++;
        }
        int length = right - left + 1;

        if (length > max_length) {
            max_length = length;
            best_sum = sum;
        }

    }
    
    std::cout <<"Best sum: "<< best_sum << std::endl;
    std::cout <<"Max length " << max_length << std::endl;

    return 0;
}