# include "Zombie.hpp"

int main()
{
	Zombie *Bobby;

	randomChump("Patrick");
	Bobby = newZombie("Bobby");
	Bobby->announce();
	delete Bobby;  //Destructor called;
	return(0);
}