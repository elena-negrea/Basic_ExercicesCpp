//Use nested loops to print a solid square pattern of asterisks (*) of size 4 * 4.
/*Expected Output:
Enter the side length N: 4
* * * * 
* * * * 
* * * * 
* * * * */

#include <iostream>

int main(){
    int sizeSq;

    std::cout << "Enter the size of your square: ";
    std::cin >> sizeSq;
    char star = '*';
    for(int i = 0; i < sizeSq; i++)
        {
            for(int j = 0; j < sizeSq; j++)
            {
                std::cout << star << ' ';
            }
            std::cout<< std::endl;
        }
        
    return 0;
}