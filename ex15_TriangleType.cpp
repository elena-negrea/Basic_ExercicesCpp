/* Given the lengths of the three sides of a triangle. 
Determine and print the type of the triangle: Equilateral (all sides equal), Isosceles (exactly two sides equal), or Scalene (no sides equal).*/
#include <iostream> 

int main(){
   
    double sideA , sideB , sideC;
     std::cout<<"Enter side A: "<<std::endl;
     std::cin >> sideA;

     std::cout<<"Enter side B: "<<std::endl;
     std::cin >> sideB;

     std::cout<<"Enter side C: "<<std::endl;
     std::cin >> sideC;

     //first check if it's a valid triangle
    if (sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA)
        std::cout << "The given sides DO NOT form a valid triangle." << std::endl;

    else if(sideA == sideB && sideB == sideC)
        std::cout<<"The triangle is Equilateral ";
    else if( sideA == sideB || sideA == sideC || sideB == sideC)
        std::cout<<"The triangle is Isosceles ";
    else 
        std::cout << "The triangle is Scalene ";
  
    //Expected Output: The triangle is ...
    return 0;
}
