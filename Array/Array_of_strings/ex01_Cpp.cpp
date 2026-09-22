#include <iostream>
#include <cstring>

int main(){
    char arr[3][10] = {"Meow", "Miau", "mrooow"};

    for(int i = 0; i<3; i++ )
        std::cout<< arr[i] << '\n';
    
    std::strcpy(arr[0], "GFc");
    std::cout << arr[0] << '\n';

    return 0;
}
