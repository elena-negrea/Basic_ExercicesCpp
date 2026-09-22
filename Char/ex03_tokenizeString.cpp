/*We can use getline() function along with stringstream to split a sentence on the basis of a character.*/

#include <bits/stdc++.h>

int main(){
    std::string S, T;
    getline(std::cin, S);

    std::stringstream X(S);

    while(getline(X, T, ' '))
        std::cout << T << std::endl;

    return 0;
}