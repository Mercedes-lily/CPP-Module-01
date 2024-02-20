# include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon Constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon Destructor called" << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string	&Weapon::getType(void) const
{
	return(this->_type);
}
