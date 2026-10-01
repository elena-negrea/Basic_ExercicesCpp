/* citesc două numere naturale.
Să se afişeze numărul care are mai multe cifre egale cu 1 în reprezentarea în baza 2.*/

#include <iostream>

int base10_convert( int cpy_n, int arr[], int target_base ){
    int cnt = 0;

    while(cpy_n){
        
        int remainder;
        remainder = cpy_n % 2;
        cpy_n /= target_base;
        arr[cnt] = remainder;
        cnt++;
       
    }
    
    return cnt ;
}
void print_arr(int ar[], int cnt ){

    for(int j = cnt - 1; j >= 0; j --){
        std::cout << ar[j];
    }
    std::cout << std::endl;

}

int how_many1(int ar[], int cnt){

    int count_1 = 0;
    for(int i = 0; i < cnt; i++){
        if(ar[i] == 1){
            count_1++;
        }

    }
    return count_1;
}

int main(){
    int n1 = 1240, n2 = 48; 
    int target_base = 2;
    int cpy_n1 = n1, cpy_n2 = n2;
    int arr[65];
    int m;
    m = base10_convert( cpy_n1, arr,  target_base);

    int arr2[65];
    int k;
    k = base10_convert( cpy_n2, arr2,  target_base);
  
    int count1_n = how_many1(arr, m);
    std::cout << "number1 : ";
    print_arr(arr, m);

    std::cout << " And has " << count1_n << " of digit 1" << std::endl;


    int count1_n2 = how_many1(arr2, k);
    std::cout << "number2 : ";
    print_arr(arr2, k);

    std::cout << " And has " << count1_n2 << " of digit 1" << std::endl;

    if(count1_n > count1_n2)
        std::cout<< " Bigger count of 1 was found in the number " << n1;
    else if (count1_n < count1_n2)
        std::cout<< " Bigger count of 1 was found in the number " << n2;
    else
     std::cout<< "Number " << n1 << " and number " << n2 <<" has equal nr of 1 in the base 2";

   return 0;
}