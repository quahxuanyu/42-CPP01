#include <iostream>

int main(void) {
	std::string name = "HI THIS IS BRAIN";
	std::string *stringPTR = &name;
	std::string &stringREF = name;

	std::cout << "Memory address of variable 'name':  " << &name << std::endl;
	std::cout << "Memory address held by 'stringPTR': " << stringPTR << std::endl;
	std::cout << "Memory address held by 'stringREF': " << &stringREF << std::endl;

	std::cout << "Value of 'name':               " << name << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}