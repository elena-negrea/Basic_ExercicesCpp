/* Read a student’s numerical score (0 to 100) 
and assign a letter grade based on the following criteria using an if-else if ladder:
 A (90-100), B (80-89), C (70-79), D (60-69), and F (below 60). */

 #include <iostream>

 int main(){

     int score;

    std::cout << "Enter the student's score (0-100): "<< std::endl;
    std::cin >> score;

    while( score>100 || score < 0)
    {
        std::cout << "Invalid grade! Enter score: "<< std::endl;
        std::cin >> score;
    }
    
    if( score >= 90 && score <= 100)
        std::cout << "Grade: A";
    else if(score >= 80 && score <= 89)
         std::cout << "Grade: B";
    else if(score >=70 && score <= 89)
         std::cout << "Grade: C";
    else if(score >=60 && score <= 69)
         std::cout << "Grade: D";
    else if(score >=0 && score < 60 )
         std::cout << "Grade: F";
    else
         std::cout << "Invalid";
        
    return 0;
 }