#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Harl karen;
	
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	karen.complain(argv[1]);
}