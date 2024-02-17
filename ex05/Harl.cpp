#include "Harl.hpp"
#include <iostream>
#include <string>

void Harl::debug( void )
{
	std::cout <<  "\033[0;35mI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info( void )
{
	std::cout << "\033[0;34mI cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "\033[0;34mYou didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" <<std::endl;
}

void Harl::warning( void )
{
	std::cout << "\033[0;33mI think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "\033[0;33mI've been coming or years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "\033[0;32mThis is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::*functptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			(this->*functptr[i])();
			return;
		}
	}
	std::cout << "\033[0;00m...Thinking about the next complain..." << std::endl;
}

