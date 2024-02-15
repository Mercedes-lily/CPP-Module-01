#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie zombie(name);
	zombie.announce();
}

//Destructor called immediatly when we exit the function because it's not a pointeur