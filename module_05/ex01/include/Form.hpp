#ifndef FORM_H
#define FORM_H

#include <iostream>
#define C_BLUE    "\e[1;34m"
#define C_RESET   "\e[0m"

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
		void				beSigned(Bureaucrat const &b);
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
};

std::ostream	&operator<<(std::ostream &out, Form &src);

#endif
