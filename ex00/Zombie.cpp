# include "Zombie.hpp"
# include <string>
# include <iostream>

void	Zombie::announce(void) const
{
	std::cout << "\033[1;32m" << this->_name << "\033[0;91m : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "\033[0;35mConstructor Called" << std::endl;
}

Zombie::~Zombie()
{
		std::cout << "\033[0;30mAdios " << this->_name << std::endl;
}