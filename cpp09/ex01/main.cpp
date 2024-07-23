# include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error." << std::endl;
		return 1;
	}

	std::string verif = av[1];
	if (verif.find_first_of("0123456789+-/*") == std::string::npos)
	{
		std::cerr << "Error." << std::endl;
		return 1;
	}

	RPN rpn;
	
	try
	{
		rpn.doTheCalculation(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}