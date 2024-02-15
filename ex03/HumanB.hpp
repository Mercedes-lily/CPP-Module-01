#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		~HumanB(void);
		std::string	getName(void) const;
		void	attack() const;
		void	setWeapon(Weapon &Weapon);

	private :
		std::string _name;
		Weapon *_weapon;
};

#endif
