# include "Zombie.hpp"

int main()
{
	Zombie *Bobby;

	randomChump("Patrick"); //Wihout new
	Bobby = newZombie("Bobby"); // With new
	Bobby->announce();
	delete Bobby;
	return(0);
}