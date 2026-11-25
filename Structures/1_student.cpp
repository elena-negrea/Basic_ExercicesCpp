#include <iostream>
#include <string>

struct Student {
	std::string name;
	int rollNo;
	float marks[5];
	
	//Constructor
	Student(std::string n, int r, float m[]){
		name = n ;
		rollNo = r ;
		for(int i = 0; i < 5; i++){
			marks[i] = m[i];
		}
	}
	//Member function to calculate average
	float average() {
		float sum = 0;
		for(int i = 0; i <5; i++){
			sum += marks[i];
		}
		return sum /5;
	}
};

int main() {
	float m[] = {85.5, 90.0, 78.5, 92.5, 88.0};
	Student s("Alice", 101, m);
	
	std::cout << "Average marks: "<< s.average() << std::endl;
	return 0;
}
