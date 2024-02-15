# include "Zombie.hpp"
# include <string>
# include <iostream>

Zombie::Zombie()
{
	std::cout << "\033[0;35mConstructor Called" << std::endl;
}

Zombie::~Zombie()
{
		std::cout << "\033[0;30mAdios " << this->_name << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "\033[1;37m" << this->_name << "\033[0;91m : BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}