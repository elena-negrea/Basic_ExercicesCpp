/*The algorithm takes the binary number in groups of two digits from right to left,
 converts each group from binary to its corresponding base-4 digit,
  and places that digit in the correct position in the final result.*/

#include <iostream>

int main() {
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;

    int rez = 0;
    int p = 1;

    while (n > 0) {
        int g = n % 100;               
        int cif = (g / 10) * 2 + g % 10; 

        rez += cif * p;                 
        p *= 10;                          
        n /= 100;                         
    }

    std::cout << "Base 4: " << rez;

    return 0;
}