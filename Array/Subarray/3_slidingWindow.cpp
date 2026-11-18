#include <iostream> 
using namespace std;

int main(){
    int a[] = {5, 6, 1, 2, 6, 6, 4, 3};
    int n = 8, k = 3;

    //first window
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += a[i];
    }

    int max_sum = sum;
    int start = 0;

    //move the window
    for(int i = 1; i <= n - k; i++){
        sum = sum - a[i-1] + a[i + k - 1];

        if (sum > max_sum){
            max_sum = sum;
            start = i;
        }
    }
    cout << "Maximum sum: "<< max_sum << endl;
    cout << "Starting index: "<< start << endl;
    
    return 0;
}