#include "Bureaucrat.hpp"
#include "Form.hpp"

#define C_RED     "\e[1;31m"
# define C_GREEN   "\e[1;32m"
#define C_RESET   "\e[0m"

Bureaucrat::Bureaucrat(std::string const name, int grade):
		_name(name),
		_grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& src):
		_name(src._name),
		_grade(src._grade)
{
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs)
{
	if (this != &rhs)
		_grade = rhs._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

std::string const	Bureaucrat::getName() const
{
	return _name;
}

int					Bureaucrat::getGrade() const
{
	return _grade;
}

void				Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		_grade--;
	}
	catch (std::exception &e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl;
	}
}

void				Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		_grade++;
	}
	catch (std::exception &e)
	{
		std::cerr << C_RED << e.what() << C_RESET << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return out;
}

void				Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cannot sign " << form.getName() << " because " C_RED << e.what() << C_RESET << std::endl;
		return ;
	}
	std::cout << C_GREEN << _name << " signs " << form.getName() << C_RESET << std::endl;

}

void			Bureaucrat::executeForm(Form const& form) const
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " cannot execute " << form.getName() << " because " C_RED << e.what() << C_RESET << std::endl;
		return ;
	}
	std::cout << C_GREEN << _name << " execute " << form.getName() << C_RESET << std::endl;
}
