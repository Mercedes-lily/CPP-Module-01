#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

//Destructor not called immediatly when we exit the function because it's a pointeur