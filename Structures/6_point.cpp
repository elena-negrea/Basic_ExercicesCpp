//Passing Structure to Function by Reference
/* Create a C++ structure named Point. 
This structure should have two integer members: x and y, representing coordinates in a two-dimensional plane.
Write a function named double_coordinates that takes a Point structure by reference. 
Inside this function, multiply both the x and y coordinates by 2. 
Demonstrate that the original Point variable in main has been modified after the function call.*/

#include <iostream>

struct Point {
    int x;
    int y;
};

// Function that takes a structure by reference
void double_coordinates(Point &p) {
    p.x *= 2; // Directly modifies the original p1 in main
    p.y *= 2; // Directly modifies the original p1 in main
}

int main() {
    Point p1 = {5, 10};

    std::cout << "Original Point: (" << p1.x << ", " << p1.y << ")" << std::endl;

    // Call the function, passing by reference
    double_coordinates(p1);

    std::cout << "Point After Doubling: (" << p1.x << ", " << p1.y << ")" << std::endl;

    return 0;
}