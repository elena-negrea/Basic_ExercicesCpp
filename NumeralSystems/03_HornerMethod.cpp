// from any base b to any base d
#include <iostream>

int main()
{
    int number, base1, base2;
    int arr1[65];
    int arr2[65];

    std::cout << "Enter the number and its base: ";
    std::cin >> number >> base1;

    std::cout << "Enter the conversion base: ";
    std::cin >> base2;

    
    while(base2 > 10)
    {
        std::cout << "Invalid input over 10. Try again: ";
        std::cin >> base2;
    }

    // ------------------------------------
    // STEP 1: base1 -> base 10
    //  method Horner
    // ------------------------------------

    int number_copy = number;
    int i = 0;

    // extragem cifrele
    while(number_copy)
    {
        arr1[i] = number_copy % 10;
        number_copy /= 10;
        i++;
    }

    // Horner
    int number_converted10 = 0;

    for(int j = i - 1; j >= 0; j--)
    {
        number_converted10 =
            number_converted10 * base1 + arr1[j];
    }

    std::cout << "Base 10: "
              << number_converted10 << '\n';


    // ------------------------------------
    // STEP 2: base 10 -> base2
    // ------------------------------------

    int copy10 = number_converted10;
    i = 0;

    while(copy10)
    {
        arr2[i] = copy10 % base2;
        copy10 /= base2;
        i++;
    }

    int final_number = 0;

    for(int j = i - 1; j >= 0; j--)
    {
        final_number =
            final_number * 10 + arr2[j];
    }

    std::cout << "Final: "
              << final_number << '\n';

    return 0;
}