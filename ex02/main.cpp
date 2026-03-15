#include <iostream>
#include <string>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "Address of str: " << &str << std::endl;
	std::cout << "Address stored in stringPTR: " << stringPTR << std::endl;
	std::cout << "Address stored in stringREF: " << &stringREF << std::endl;

	std::cout << "str's value: " << str << std::endl;
	std::cout << "stringPTR's value: " << *stringPTR << std::endl;
	std::cout << "stringREF's value: " << stringREF << std::endl;
}
