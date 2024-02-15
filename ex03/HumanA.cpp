#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA Constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA Destructor called" << std::endl;
}

std::string	HumanA::getName(void) const
{
	return(this->_name);
}

std::string	HumanA::getType(void) const
{
	return(this->_weapon.getType());
}

void	HumanA::attack() const
{
	std::cout << this->getName() <<  " attacks with their " << this->getType() << std::endl;
}