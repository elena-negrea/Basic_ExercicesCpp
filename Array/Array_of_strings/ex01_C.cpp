//C language
#include <stdio.h>
#include <string.h>

int main(){
    char arr[3][10] = {"Meow", "Miau", "mrooow"};

    for(int i = 0; i<3; i++ ){
        printf("%s\n", arr[i]);
    }
    strcpy(arr[0], "GFC"); //this will copy the value to the array of 0

    printf("%s\n", arr[0]);

    return 0;
}
