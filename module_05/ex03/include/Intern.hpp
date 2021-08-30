#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Form*	makeForm(std::string form, std::string target);
		Form*	shrubbery(std::string target);
		Form*	presidential(std::string target);
		Form*	robotomy(std::string target);
		Intern();
		Intern(Intern const& other);
		Intern	&operator=(Intern const& other);
		~Intern();

		class InvalidFormException : public std::exception
		{
			const char* what() const throw()
			{
				return "Intern cannot create the form, because type of form is wrong!";
			}
		};
};

#endif
