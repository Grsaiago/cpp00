#include "RNP.hpp"

RNP::RNP(std::string args) : _args(args)
{
	 if (args.find_first_not_of("0123456789*/+- ") != std::string::npos)
		throw std::logic_error("Invalid Argument, insert only '0123456789*/-+ and space'");
	this->_args = args;
}

RNP::RNP(RNP &cpy) : _stack(cpy.getStack()), _args(cpy.getArgs())
{ }

RNP::~RNP(void) { }

RNP	&RNP::operator=(RNP &rhs)
{
	this->_stack = rhs.getStack();
	return (*this);
}

std::stack<int>	&RNP::getStack(void)
{
	return (this->_stack);
}

std::string	&RNP::getArgs(void)
{
	return (this->_args);
}

void	RNP::calculate(void)
{
	std::stringstream	stream(this->getArgs());
	int			ref = 0;
	int			lhs = 0;
	int			rhs = 0;
	int			result = 0;

	while (42)
	{
		ref = (stream >> std::ws).get();
		if (stream.eof()) break ;
		if (isdigit(ref)) {
			this->_stack.push(ref - '0');
		}
		else {
			switch (static_cast<char>(ref))
			{
				case ('+'):
					if (this->_stack.size() >= 2)
					{
						rhs = this->_stack.top();
						this->_stack.pop();
						lhs = this->_stack.top();
						this->_stack.pop();
						this->_stack.push(lhs + rhs);
					}
					break ;
				case ('-'):
					if (this->_stack.size() >= 2)
					{
						rhs = this->_stack.top();
						this->_stack.pop();
						lhs = this->_stack.top();
						this->_stack.pop();
						this->_stack.push(lhs - rhs);
					}
					break ;
				case ('/'):
					if (this->_stack.size() >= 2)
					{
						rhs = this->_stack.top();
						this->_stack.pop();
						lhs = this->_stack.top();
						this->_stack.pop();
						this->_stack.push(lhs / rhs);
					}
					break ;
				case ('*'):
					std::cout << "It's an *" << std::endl;
					{
						rhs = this->_stack.top();
						this->_stack.pop();
						lhs = this->_stack.top();
						this->_stack.pop();
						this->_stack.push(lhs * rhs);
					}
					break ;
			}
		}
	}
	std::cout << this->_stack.top() << std::endl;

	return ;
}
