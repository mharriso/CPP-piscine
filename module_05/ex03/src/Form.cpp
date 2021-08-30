#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const name, int const gradeSign, int const gradeExecute):
		_name(name),
		_signed(false),
		_gradeSign(gradeSign),
		_gradeExecute(gradeExecute)
{
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw Form::GradeTooLowException();
	if (_gradeSign < 1 || _gradeExecute < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const& src):
		_name(src._name),
		_signed(src._signed),
		_gradeSign(src._gradeSign),
		_gradeExecute(src._gradeExecute)
{
}

Form&	Form::operator=(Form const& rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return *this;
}

Form::~Form()
{
}

std::string const	Form::getName() const
{
	return _name;
}

bool				Form::getSigned() const
{
	return _signed;
}

int					Form::getGradeSign() const
{
	return _gradeSign;
}

int					Form::getGradeExecute() const
{
	return _gradeExecute;
}

void				Form::beSigned(Bureaucrat const &b)
{
	if(_signed == true)
		throw Form::AlreadySignedException();
	if(b.getGrade() > _gradeSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

std::ostream	&operator<<(std::ostream &out, Form &src)
{
	out << C_BLUE << "----------FORM STATE---------" << std::endl;
	out << "        Name: " << src.getName() << std::endl;
	out << "   SighGrade: " << src.getGradeSign() << std::endl;
	out << "ExecuteGrade: " << src.getGradeExecute() << std::endl;
	out << "      SIGNED: " << std::boolalpha << src.getSigned() << C_RESET << std::endl;
	return out;
}

void				Form::execute(Bureaucrat const &executor) const
{
	if(executor.getGrade() > _gradeExecute)
		throw Form::GradeTooLowException();
	if(_signed == false)
		throw Form::NotSignedException();
	action();
}

