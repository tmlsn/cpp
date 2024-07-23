#include "PmergeMe.hpp"

void printArg(char **av)
{
	for (int i = 0; av[i]; i++)
	{
		std::cout << av[i] << " ";
	}
	std::cout << std::endl;
}

int  main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error." << std::endl;
		return (1);
	}
	for (int i = 1; i < ac; i++)
	{
		std::string str = av[i];
		if (str.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cerr << "Error." << std::endl;
			return (1);
		}
	}
	
	PmergeMe pmergeVec;
	PmergeMe pmergeDeq;

	std::vector<std::pair<int, int> > vecPair;
	pmergeVec.createVector(vecPair, av, ac);
	std::deque<std::pair<int, int> > deqPair;
	pmergeDeq.createDeque(deqPair, av, ac);

	printArg(av);

	clock_t vecStart = clock();
	pmergeVec.doTheSortV(vecPair);
	clock_t vecEnd = clock();

	double vecTime = (static_cast<double>(vecEnd - vecStart) / CLOCKS_PER_SEC) * 1000000;

	clock_t deqStart = clock();
	pmergeDeq.doTheSortD(deqPair);
	clock_t deqEnd = clock();

	double deqTime = (static_cast<double>(deqEnd - deqStart) / CLOCKS_PER_SEC) * 1000000;


	printVec(pmergeVec.getVec());
	//printDeq(pmergeDeq.getDeq());
	std::cout << "Time to process a range of " << pmergeVec.getVec().size() << " elements with std::vector : " << vecTime << " μs" << std::endl;
	std::cout << "Time to process a range of " << pmergeDeq.getDeq().size() << " elements with std::deque : " << deqTime << " μs" << std::endl;

	return (0);
}

