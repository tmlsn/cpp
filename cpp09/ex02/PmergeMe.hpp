#pragma once

# include <iostream>
# include <deque>
# include <vector>
# include <list>
# include <sstream>
# include <cstdlib>
# include <utility> 
# include <ctime>



class PmergeMe
{
private:
	std::vector<int>	_sortedVector;
	std::deque<int>		_sortedDeque;
	int					_odd;

public:
	PmergeMe();
	PmergeMe(const PmergeMe &cpy);
	PmergeMe &operator=(const PmergeMe &obj);
	/* PmergeMe(std::vector<int> toSort);
	PmergeMe(std::deque<int> toSort); */
	void createVector(std::vector<std::pair<int, int> > &vec, char **av, int ac);
	void createDeque(std::deque<std::pair<int, int> > &deq, char **av, int ac);

	void doTheSortV(std::vector<std::pair<int, int> > &vec);
	void doTheSortD(std::deque<std::pair<int, int> > &deq);

	std::vector<int> &getVec();
	std::deque<int> &getDeq();

	void mergeInsertSortV(std::vector<std::pair<int, int> > &vec, int left, int right);
	void mergeInsertSortD(std::deque<std::pair<int, int> > &deq, int left, int right);

	void mergeV(std::vector<std::pair<int, int> > &vec, int left, int right, int mid);
	void mergeD(std::deque<std::pair<int, int> > &deq, int left, int right, int mid);

	void insertSortV(std::vector<std::pair<int, int> > &vec);
	void insertSortD(std::deque<std::pair<int, int> > &deq);

	~PmergeMe();
};

void printVec(std::vector<int> toPrintVector);
void printVecPair(std::vector<std::pair<int, int> > toPrintVector);
void printDeq(std::deque<int> toPrintDeque);
void printDeqPair(std::deque<std::pair<int, int> > toPrintDeque);



