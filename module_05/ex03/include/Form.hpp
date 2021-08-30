#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "tools.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeSign;
		int const			_gradeExecute;
		Form();

	public:
		std::string const	getName() const;
		bool				getSigned() const;
		int					getGradeSign() const;
		int					getGradeExecute() const;
		virtual	void		action() const = 0;
		void				beSigned(Bureaucrat const &b);
		void				execute(Bureaucrat const &executor) const;
		Form(std::string const name, int const gradeSign, int const gradeExecute);
		Form(Form const&);
		Form	&operator=(Form const&);
		~Form();

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return "grade is too low!";
		}
	};

	class GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return "grade is too high!";
		}
	};

	class AlreadySignedException : public std::exception
	{
		const char* what() const throw()
		{
			return "form is already signed!";
		}
	};

	class NotSignedException : public std::exception
	{
		const char* what() const throw()
		{
			return "form has not been signed!";
		}
	};
};

std::ostream	&operator<<(std::ostream &out, Form &src);

#endif
