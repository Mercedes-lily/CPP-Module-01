#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _name(name)
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
	std::cout << this->getName() <<  " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
		this->_weapon = &weapon;
}