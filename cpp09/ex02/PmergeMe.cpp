#include "PmergeMe.hpp"


PmergeMe::PmergeMe()
{
	_odd = -1;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &cpy)
{
	*this = cpy;
};

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
	if (this != &obj)
	{
		_sortedDeque = obj._sortedDeque;
		_sortedVector = obj._sortedVector;
		_odd = obj._odd;
	}
	return(*this);
};

/*************************************************************************************/
/*                                 VECTOR :                                          */
/*************************************************************************************/


void PmergeMe::createVector(std::vector<std::pair<int, int> > &vec, char **av, int ac)
{
	int pos = 0;
	for (size_t i = 1; av[i] && av[i + 1]; i+=2)
	{
		vec.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i + 1])));
		pos += 2;
	}
	if ((ac - 1) % 2 != 0)
		_odd = std::atoi(av[++pos]);
}

void PmergeMe::doTheSortV(std::vector<std::pair<int, int> > &vec)
{
	std::vector<std::pair<int, int> >::iterator it;
	int tmp;
	for (it = vec.begin(); it != vec.end(); it++)
	{
		if (it->first > it->second)
		{
			tmp = it->first;
			it->first = it->second;
			it->second = tmp;
		}
	}
	
	// std::cout << "pairs sorted :"<< std::endl;
	// printVecPair(vec);
	mergeInsertSortV(vec, 0, vec.size() - 1);
	// std::cout << "vec befor insert :" << std::endl;
	// printVecPair(vec);
	insertSortV(vec);
	// std::cout << "vec after insert :" << std::endl;
	// printVec(_sortedVector);
}

void PmergeMe::mergeInsertSortV(std::vector<std::pair<int, int> > &vec, int left, int right)
{
	// std::cout << "Saluts les ptits indiens !" << std::endl;
	if (left < right)
	{
		int mid = left + (right - left) / 2;
		/* if (mid % 2 != 0)
			mid++; */
		mergeInsertSortV(vec, left, mid);
		mergeInsertSortV(vec, mid + 1, right);
		// std::cout << "vec bfor merge :" << std::endl;
		// printVecPair(vec);
		mergeV(vec, left, right,  mid);
		// std::cout << "vec after merge :" << std::endl;
		// printVecPair(vec);
	}
	else{
		return ;
	}
}

void PmergeMe::insertSortV(std::vector<std::pair<int, int> > &vec)
{
	std::vector<int> hbVec;
	std::vector<int> lbVec;


	std::vector<std::pair<int, int> >::iterator it;
	for (it = vec.begin(); it != vec.end(); it++)
	{
		hbVec.push_back(it->second);
		lbVec.push_back(it->first);
	}
	for (size_t i = 0; i < lbVec.size() && i < hbVec.size(); i++)
	{
		hbVec.insert(std::lower_bound(hbVec.begin(), hbVec.begin() + i * 2, lbVec[i]), lbVec[i]);
	}
	if (_odd >= 0)
		hbVec.insert(std::lower_bound(hbVec.begin(), hbVec.end(), _odd), _odd);
	for (size_t i = 0; i < hbVec.size() ; i++)
	{
		_sortedVector.push_back(hbVec[i]);
	}
}

void PmergeMe::mergeV(std::vector<std::pair<int, int> > &vec, int left, int right, int mid)
{
	int leftHalf = mid - left + 1;
	int rightHalf = right - mid;

	std::vector<std::pair<int, int> > leftArr(leftHalf);
	std::vector<std::pair<int, int> > rightArr(rightHalf);

	for (int i = 0; i < leftHalf; i++)
	{
		leftArr[i] = vec[left + i];
	}
	for (int i = 0; i < rightHalf; i++)
	{
		rightArr[i] = vec[mid + 1 + i];
	}
	
	int i = 0, j = 0, k = left;

	while (i < leftHalf && j < rightHalf)
	{
		if (leftArr[i].second <= rightArr[j].second)
		{
			vec[k] = leftArr[i];
			i++;
		}
		else
		{
			vec[k] = rightArr[j];
			j++;
		}
		k++;
	}

	while (i < leftHalf)
	{
		vec[k] = leftArr[i];
		i++;
		k++;
	}
	
	while (j < rightHalf)
	{
		vec[k] = rightArr[j];
		j++;
		k++;
	}
}

void printVecPair(std::vector<std::pair<int, int> > toPrintVector)
{
	std::vector<std::pair<int, int> >::iterator it;

	std::cout << "Before : ";

	for (it = toPrintVector.begin(); it != toPrintVector.end(); it++)
	{
		std::cout << it->first << " ";
		std::cout << it->second << " ";
	}
	std::cout << std::endl;
}

void printVec(std::vector<int> toPrintVector)
{
	std::vector<int>::iterator it;

	std::cout << "After : ";

	for (it = toPrintVector.begin(); it != toPrintVector.end(); it++)
		{
			std::cout << *it << " ";
		}
	std::cout << std::endl;
}

std::vector<int> &PmergeMe::getVec()
{
	return _sortedVector;
};


/*************************************************************************************/
/*                                 DEQUE :                                           */
/*************************************************************************************/



void PmergeMe::createDeque(std::deque<std::pair<int, int> > &deq, char **av, int ac)
{
	int pos = 0;
	for (size_t i = 1; av[i] && av[i + 1]; i+=2)
	{
		deq.push_back(std::make_pair(std::atoi(av[i]), std::atoi(av[i + 1])));
		pos += 2;
	}
	if ((ac - 1) % 2 != 0)
		_odd = std::atoi(av[++pos]);

}

void PmergeMe::doTheSortD(std::deque<std::pair<int, int> > &deq)
{
	std::deque<std::pair<int, int> >::iterator it;
	int tmp;
	// int tmp2;
	//printVec(vec);
	for (it = deq.begin(); it != deq.end(); it++)
	{
		if (it->first > it->second)
		{
			tmp = it->first;
			it->first = it->second;
			it->second = tmp;
		}
	}
	
	// std::cout << "pairs sorted :"<< std::endl;
	// printDeqPair(deq);
	mergeInsertSortD(deq, 0, deq.size() - 1);
	// std::cout << "deq befor insert :" << std::endl;
	// printDeqPair(deq);
	insertSortD(deq);
	// std::cout << "deq after insert :" << std::endl;
	// printDeq(_sortedDeque);
}

void PmergeMe::mergeInsertSortD(std::deque<std::pair<int, int> > &deq, int left, int right)
{
	// std::cout << "Saluts les ptits indiens !" << std::endl;
	if (left < right)
	{
		int mid = left + (right - left) / 2;
		/* if (mid % 2 != 0)
			mid++; */
		mergeInsertSortD(deq, left, mid);
		mergeInsertSortD(deq, mid + 1, right);
		// std::cout << "deq bfor merge :" << std::endl;
		// printDeqPair(deq);
		mergeD(deq, left, right,  mid);
		// std::cout << "deq after merge :" << std::endl;
		// printDeqPair(deq);
	}
	else{
		return ;
	}
}

void PmergeMe::insertSortD(std::deque<std::pair<int, int> > &deq)
{
	std::deque<int> hbDeq;
	std::deque<int> lbDeq;


	std::deque<std::pair<int, int> >::iterator it;
	for (it = deq.begin(); it != deq.end(); it++)
	{
		hbDeq.push_back(it->second);
		lbDeq.push_back(it->first);
	}
	for (size_t i = 0; i < lbDeq.size() && i < hbDeq.size(); i++)
	{
		hbDeq.insert(std::lower_bound(hbDeq.begin(), hbDeq.begin() + i * 2, lbDeq[i]), lbDeq[i]);
	}
	if (_odd >= 0)
		hbDeq.insert(std::lower_bound(hbDeq.begin(), hbDeq.end(), _odd), _odd);
	for (size_t i = 0; i < hbDeq.size() ; i++)
	{
		_sortedDeque.push_back(hbDeq[i]);
	}
}

void PmergeMe::mergeD(std::deque<std::pair<int, int> > &deq, int left, int right, int mid)
{
	int leftHalf = mid - left + 1;
	int rightHalf = right - mid;

	std::deque<std::pair<int, int> > leftArr(leftHalf);
	std::deque<std::pair<int, int> > rightArr(rightHalf);

	for (int i = 0; i < leftHalf; i++)
	{
		leftArr[i] = deq[left + i];
	}
	for (int i = 0; i < rightHalf; i++)
	{
		rightArr[i] = deq[mid + 1 + i];
	}
	
	int i = 0, j = 0, k = left;

	while (i < leftHalf && j < rightHalf)
	{
		if (leftArr[i].second <= rightArr[j].second)
		{
			deq[k] = leftArr[i];
			i++;
		}
		else
		{
			deq[k] = rightArr[j];
			j++;
		}
		k++;
	}

	while (i < leftHalf)
	{
		deq[k] = leftArr[i];
		i++;
		k++;
	}
	
	while (j < rightHalf)
	{
		deq[k] = rightArr[j];
		j++;
		k++;
	}
}

void printDeq(std::deque<int> toPrintDeque)
{
	std::deque<int>::iterator it;

	std::cout << "After : ";

	for (it = toPrintDeque.begin(); it != toPrintDeque.end(); it++)
		{
			std::cout << *it << " ";
		}
	std::cout << std::endl;
}

void printDeqPair(std::deque<std::pair<int, int> > toPrintDeque)
{
	std::cout << "\nDeque\n";

	std::deque<std::pair<int, int> >::iterator it;

	for (it = toPrintDeque.begin(); it != toPrintDeque.end(); it++)
		{
			std::cout << it->first << std::endl;
			std::cout << it->second << std::endl;
		}
}

std::deque<int> &PmergeMe::getDeq()
{
	return _sortedDeque;
};
