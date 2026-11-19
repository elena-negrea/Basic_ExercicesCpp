#include <string>
#include <iostream>
/* Declare an array capable of storing information for 3 Book structures.
 Write a program to loop through the array, prompting the user to input the data (title, author, price) for each of the 3 books. Finally, loop through the array again to display the data for all 3 books.*/

// Define the Book structure
struct Book {

    std::string title;
    std::string author;
    float price;
};

int main() {
    // Example of declaring an array of 3 books
    Book b[3];
    //input 3 books information
    for(int i =0; i<3; i++){
        std::cout<<" --- Enter data for book " << i+1<< " --- "<< std::endl;

        std::cout<<"Enter Book Title: ";
        std::getline(std::cin, b[i].title);

        std::cout<<"Enter Book Author: ";
        std::getline(std::cin, b[i].author);

        std::cout<< "Enter Book price: ";
        std::cin >> b[i].price;
         /*cin >> leaves the newline character \n int the input area.*/
       // Solution: Igbore it before the next getline() call
        std::cin.ignore();

    }
    //Output 3 books information
    for(int i =0; i< 3; i++){
        std::cout<<" --- Book nr. " << i+1<< " --- "<< std::endl;

        std::cout << "Book Title: " << b[i].title << std::endl;
        std::cout << "Book Author: " << b[i].author << std::endl;
        std::cout << "Price: $" << b[i].price << std::endl;
    }

    return 0;
}