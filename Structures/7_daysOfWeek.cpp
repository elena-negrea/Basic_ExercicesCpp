#include <iostream>

enum Days_week {
    MONDAY, //0
    TUESDAY , //1
    WEDNESDAY, //2
    THURSDAY, //3
    FRIDAY = 54, //54
    SATURDAY, //55 
    SUNDAY //56
};

int main(){
    
    //enum Days_week myVar; //adeclaration
    Days_week myVar = TUESDAY;

    std::cout << myVar << std::endl; //outtput  : 1

    myVar = SUNDAY;
    switch (myVar){
        case MONDAY:
            std::cout<<"MONDAY";
            break;
        case TUESDAY:
            std::cout<<"TUESDAY";
            break;
        case WEDNESDAY:
            std::cout<<"WEDNESDAY";
            break;
        case THURSDAY:
            std::cout<<"THURSDAY";
            break;
        default:
            std::cout<<"CLOSED";
            break;
    }

    return 0;

}