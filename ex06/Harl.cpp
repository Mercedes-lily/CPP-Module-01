#include "Harl.hpp"
#include <iostream>
#include <string>

//TODO pourquoi pas de couleur

void Harl::debug( void )
{
	std::cout << "\033[0;31m[DEBUG]" << std::endl;
	std::cout <<  "\033[0;35mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
	std::cout << std::endl;
}

void Harl::info( void )
{
	std::cout << "\033[0;31m[INFO]" << std::endl;
	std::cout << "\033[0;34mI cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" <<std::endl;
	std::cout << std::endl;
}

void Harl::warning( void )
{
	std::cout << "\033[0;31m[WARNING]" << std::endl;
	std::cout << "\033[0;33mI think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I've been coming or years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error( void )
{
	std::cout << "\033[0;31m[ERROR]" << std::endl;
	std::cout << "\033[0;32mThis is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain( std::string level)
{
	int i;
	std::string levels[] = {"ERROR", "WARNING", "INFO", "DEBUG"};
	void (Harl::*functptr[])() = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};
	
	for (i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
			break;
	}
	switch (i) 
	{
		case 0:
			(this->*functptr[0])();
			break;
		case 1:
			(this->*functptr[1])();
			(this->*functptr[0])();
			break;
		case 2:
			(this->*functptr[2])();
			(this->*functptr[1])();
			(this->*functptr[0])();
			break;
		case 3:
			(this->*functptr[3])();
			(this->*functptr[2])();
			(this->*functptr[1])();
			(this->*functptr[0])();
			break;
		default:
			std::cout << "\033[0;30m[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
			break;
	}
}

