#include <iostream>
#include <string>

int main()
{
	std::cout << "Who are you ? ";
	std::string name;
	std::getline(std::cin, name);
	std::cout << "Hello, " << name << ", from greeter v1.0" << std::endl;

	return 0;
}
