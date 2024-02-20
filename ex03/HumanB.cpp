#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "HumanB Constructor called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB Destructor called" << std::endl;
}

std::string	HumanB::getName(void) const
{
	return(this->_name);
}

void	HumanB::attack() const
{
	if (_weapon == NULL)
	{
		std::cout << "Can't attack. Poor little thing :(" << std::endl;
		return ;
	}
	std::cout << this->getName() <<  " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
		this->_weapon = &weapon;
}