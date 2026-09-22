/*: Read a string (a sequence of characters) from the user.
 Calculate and display the length (number of characters) of
  the string without using built-in C++ string methods like length() or size().*/

  #include <iostream>

  int main(){   

    
    char inputStr[1001]; 
    int length = 0;

    std::cout << "Enter a string(may include spaces): ";
    std::cin >> getline(std::cin , inputStr); 

    for(int i = 0; ;  i++){
      if( inputStr[i] == '\0' || i >= inputStr.length() )
        break;
      length++;
    }
    std::cout << "The length of the string (manually counted) is: " << length << std::endl;

    return 0;
  }