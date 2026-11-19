#include <string>
#include <iostream>
/*write a complete C++ program that prompts the user to enter the title,
 author, and price for a single book. 
 After reading the input, the program should display all the captured 
 information back to the console*/

// Define the Book structure
struct Book {

    std::string title;
    std::string author;
    float price;
};

int main() {
    // Example of declaring a variable of type Book
    Book b1;
    std::cout<<"Enter Book Title: ";
    std::getline(std::cin, b1.title);

    std::cout<<"Enter Book Author: ";
    std::getline(std::cin, b1.author);

    std::cout<< "Enter Book price: ";
    std::cin >> b1.price;


    std::cout << "Book Title: " << b1.title << std::endl;
    std::cout << "Book Author: " << b1.author << std::endl;
    std::cout << "Price: $" << b1.price << std::endl;

    return 0;
}