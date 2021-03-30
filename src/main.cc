#include <iostream>
#include <string>
#include <config.h>

int main()
{
	std::cout << "Who are you ? ";
	std::string name;
	std::getline(std::cin, name);
	std::cout << "Hello, " << name << ", from "<<
	PACKAGE_STRING << " !" << std::endl;

	return 0;
}
