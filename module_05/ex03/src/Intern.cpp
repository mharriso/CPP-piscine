#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const& other)
{
	(void)other;
}

Intern&	Intern::operator=(Intern const& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern()
{
}

Form*	Intern::shrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form*	Intern::presidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form*	Intern::robotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form*	Intern::makeForm(std::string form, std::string target)
{
	typedef Form* (Intern::*func)(std::string target);

	func array[3] = {	&Intern::shrubbery,
						&Intern::presidential,
						&Intern::robotomy};

	std::string	type[3] = { "shrubbery creation",
							"presidential pardon",
							"robotomy request"	};
	for (int i = 0; i < 3; i++)
	{
		if (type[i] == form)
		{
			std::cout << "Intern create " << type[i] << " form" << std::endl;
			return (this->*array[i])(target);
		}
	}
	throw InvalidFormException();
	return 0;
}

