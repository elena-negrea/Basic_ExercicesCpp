#include <iostream>
#include <string>

struct Adress {
	std::string street;
	std::string city;
	int zipCode;
};
struct Employee {
	std::string name;
	int id;
	Adress homeAddress; //nested structure
};

int main(){
	Employee emp = {
		"John Doe",
		1001,
		{"123 Main St", "New york", 10001}
	};
	std::cout << "Employee: "<< emp.name << std::endl;
	std::cout << "Adress: " << emp.homeAddress.street <<", "
						<<emp.homeAddress.city << " " 
						<< emp.homeAddress.zipCode << std::endl;
	return 0;
	
}
