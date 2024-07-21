# include "RPN.hpp"

RPN::RPN(/* args */)
{
}

RPN::~RPN()
{
}

void RPN::doTheCalculation(std::string value)
{
	std::stringstream ss(value);
	int		num, elem1, elem2;
	std::string	eof;
	while (!ss.eof())
	{
		// std::cout << (char)ss.peek() << std::endl;
		switch (ss.peek())
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				ss >> num;
				if (num > 9)
					throw ErrorException();
				_digits.push(num);
				break ;
			case '-':
				if (_digits.size() < 2)
					throw ErrorException();
				elem1 = _digits.top();
				_digits.pop();
				elem2 = _digits.top();
				_digits.pop();
				_digits.push(elem2 - elem1);
				// std::cout << elem1 << " - " << elem2 << " " << _digits.top() << std::endl;
				ss.ignore(1);
				break ;
			case '+':
				if (_digits.size() < 2)
					throw ErrorException();
				elem1 = _digits.top();
				_digits.pop();
				elem2 = _digits.top();
				_digits.pop();
				_digits.push(elem2 + elem1);
				// std::cout << elem1 << " + " << elem2 << " " << _digits.top() << std::endl;
				ss.ignore(1);
				break ;
			case '*':
				if (_digits.size() < 2)
					throw ErrorException();
				elem1 = _digits.top();
				_digits.pop();
				elem2 = _digits.top();
				_digits.pop();
				_digits.push(elem2 * elem1);
				// std::cout << elem1 << " * " << elem2 << " " << _digits.top() << std::endl;
				ss.ignore(1);
				break ;
			case '/':
				if (_digits.size() < 2)
					throw ErrorException();
				elem1 = _digits.top();
				_digits.pop();
				if (elem1 == 0)
					throw ErrorException();
				elem2 = _digits.top();
				_digits.pop();
				_digits.push(elem2 / elem1);
				// std::cout << elem1 << " / " << elem2 << " " << _digits.top() << std::endl;
				ss.ignore(1);
				break ;
			case '\0':
			case ' ':
				ss.ignore(1);
				break ;
			default:
				ss >> eof;
				if (!eof.empty())
					throw ErrorException();
				ss.ignore(1);
				break ;
		}
	}
	if (_digits.size() > 1)
		throw ErrorException();
	std::cout << _digits.top() << std::endl;
}

RPN::RPN(const RPN &cpy)
{
	*this = cpy;
}

RPN &RPN::operator=(const RPN &obj)
{
	if (this != &obj)
		_digits = obj._digits;
	return (*this);
}

const char *RPN::ErrorException::what() const throw()
{
	return ("Error.");
}