#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int base1, number, base2;
    cout << "baza si numarul: ";
    cin >> base1 >> number;

    cout <<"baza in care transformam: ";
    cin >> base2;

    int pos = 0, cif, final_number = 0;

    while(number)
    {
        cif = number % 10;
        final_number = cif * pow(base1, pos) + final_number;
        number /=10;
        pos++;
    }

    cout <<"Transformat: " <<final_number;
    return 0;
}