#ifndef FORM_H
#define FORM_H

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradSign;
		int const			_gradExecute;
		Form();

	public:
		std::string const	getName() const;
		bool				getSigned() const;
		int					getGradSign() const;
		int					getGradExecute() const;
		void				beSigned(Bureaucrat const &b);
		Form(std::string const name, int const gradSign, int const gradExecute);
		Form(Form const&);
		Form	&operator=(Form const&);
		~Form();


	class GradeTooHighException : public std::exception
	{
		const char* what() const throw()
		{
			return "Grade is too high!";
		}
	};

	class GradeTooLowException : public std::exception
	{
		const char* what() const throw()
		{
			return "Grade is too low!";
		}
	};

	class AlreadySignedException : public std::exception
	{
		const char* what() const throw()
		{
			return "form is already signed";
		}
	};
};

std::ostream	&operator<<(std::ostream &out, Form &src);

#endif
