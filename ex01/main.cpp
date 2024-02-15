# include "Zombie.hpp"

int main()
{
	Zombie *Horde;
	int n = 7;

	Horde = zombieHorde(n, "Bobby");
	for(int i = 0; i < n; i++)
		Horde[i].announce();
		delete [] Horde;
	return(0);
}