#include <string>
#include <iostream>
#include <limits> //for 'numeric_limits', 'fixed' is avaible in ios
#include <iomanip> //for 'std::setprecision()'


// Define the Book structure
struct DateOfBirth{//inner structure
    int day;
    int month;
    int year;
};

struct Student{//outer structure
    std::string name;
    DateOfBirth birthdate; //Nested structure member
};

struct Book {
    std::string title;
    std::string author;
    float price;
};

float calculate_total_price(Book b[], int nr_books ){//foor b[], the parameter treats it as a pointer
    float sum = 0.0f;
    for(int i = 0; i < nr_books; i++){
        sum += b[i].price;
    }
    return sum;

}
std::string find_most_expensive(Book* b, int nr_books){
    int max_index = 0;
    for(int i = 1; i<nr_books; i++){
        if (b[i].price > b[max_index].price)
            max_index = i;
    }
    return b[max_index].title;
}

int main() {
    Student s = {"Alex", {15, 6, 2004}};
    std::cout << s.name << std::endl;

    //Using the advantages of memory allocation
    int nr_books;
    std::cout << "Enter number of books: ";
    std::cin >> nr_books;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    Book* b = new Book[nr_books]; // dynamyc memory allocation

    //input 3 books information
    for(int i = 0; i<nr_books; i++){
        std::cout<<" --- Enter data for book " << i+1<< " --- "<< std::endl;
        std::cout << '\n';

        std::cout<<"Enter Book Title: ";
        std::getline(std::cin, b[i].title);

        std::cout<<"Enter Book Author: ";
        std::getline(std::cin, b[i].author);

        std::cout<< "Enter Book price: ";
        std::cin >> b[i].price;
         /*cin >> leaves the newline character \n int the input area.*/
       //Update Solution1:
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    }
    //Output 3 books information
    for(int i =0; i< nr_books; i++){
        std::cout<<" --- Book nr. " << i+1<< " --- "<< std::endl;
        std::cout << '\n';
        std::cout << "Book Title: " << b[i].title << std::endl;
        std::cout << "Book Author: " << b[i].author << std::endl;
        std::cout << "Price: $" << b[i].price << std::endl;
    }
    float grand_total  = calculate_total_price(b, nr_books);
    std::cout << "Total price of all " << nr_books <<" books: $";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << grand_total << std::endl;

    std::cout <<"\nMost expensive book is: " << find_most_expensive(b,nr_books);

    delete[] b;
    b = nullptr;

    return 0;
}