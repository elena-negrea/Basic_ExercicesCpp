//Pointers to Structures
#include <iostream>

struct Rectangle{
    float length;
    float width;
};

int main(){

    Rectangle* rect_ptr = new Rectangle;
    std::cout << "Enter length: ";
    std::cin >> rect_ptr->length;

    std::cout << "Enter width: ";
    std::cin >> rect_ptr->width;

    std::cout << "\nRectangle Dimensions: "<< std::endl;

    std::cout << "Length: "<< rect_ptr->length << std::endl;
    std::cout << "Width: " << rect_ptr -> width << std::endl;

    float area = rect_ptr->length * rect_ptr->width; 
    std::cout << "Area: "<<area << std::endl;

    //free dynamically allocated memory(on heap)
    delete rect_ptr;
    rect_ptr = nullptr; //Good practice to set pointer to null

    return 0;
}