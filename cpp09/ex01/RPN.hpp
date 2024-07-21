# pragma once

# include <iostream>
# include <stack>
# include <sstream>


class RPN
{
private:
	std::stack<int> _digits;
public:
	RPN(/* args */);
	~RPN();

	RPN(const RPN &cpy);
	RPN &operator=(const RPN &obj);

	void doTheCalculation(std::string value);

	class ErrorException : public std::exception
	{
		public :
			virtual const char *what() const throw();
	};
};
