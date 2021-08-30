#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		std::string const	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form &form);
		void				executeForm(Form const &form) const;
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const&);
		Bureaucrat	&operator=(Bureaucrat const&);
		~Bureaucrat();

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
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &src);

#endif
