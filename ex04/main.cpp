#include <iostream>
#include <fstream>
#include <string>

//TODO Check all case and segfault

std::string find_replace(std::string readed, std::string s1, std::string s2)
{
	size_t found = 0;
	
	while(found != std::string::npos)
	{
		found = readed.find(s1, found);
		if (found != std::string::npos)
		{
			readed.erase(found, s1.length());
			readed.insert(found, s2);
			found += s2.length();
		}
	}
	return (readed);
}

int main(int argc, char **argv)
{
	std::string readed;
	std::string newFile = argv[1];
	newFile += ".replace";
	if (argc != 4)
	{
		std::cout << "mmm... you need 3 arguments -file- -string- -string-";
		return (0);
	}
	std::fstream in(argv[1]);
	std::ofstream out(newFile);
	while(getline(in, readed))
		out << find_replace(readed, argv[2], argv[3]) << std::endl;
	in.close();
	out.close();
}