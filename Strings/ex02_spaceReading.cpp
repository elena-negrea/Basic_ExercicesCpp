/*Read Space Separated User Input
If we try to read the space separated string from cin stream using >> operators, it only reads the first word. 
Because whitespace character ' ' is the delimiter for cin. But thats not the case with getline().*/

#include <iostream>
#include <string> 

int main(){
    std::string str;

    getline(std::cin, str);
    std::cout <<"Hello, "<< str << " welcome to Miaw Town!";

    return 0;
}