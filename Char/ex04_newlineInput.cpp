#include <iostream>
#include <string>

int main(){

    std::string name;
    int id;

    std::cout << "Please enter you id: \n";
    std::cin >> id;

    std::cout<< "Please enter your name: \n";
    getline(std::cin, name);
//wrong
    std::cout << "Your id: "<< id <<"\n";
    std::cout << "Hello, " << name << "Welcome to Meow Town! \n";

    getline(std::cin, name);

    std::cout << "Hello, "<< name << " welcome to Meow Town! \n";

    return 0;

}