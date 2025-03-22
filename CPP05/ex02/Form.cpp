#include "./includes/Form.hpp"
#include "./includes/Bureaucrat.hpp"

Form::Form(std::string name, int gradeSignature, int gradeExecution) :
    _name(name), _gradeSignature(gradeSignature), _gradeExecution(gradeExecution), 
    _signed(false)
{
    //std::cout << YELLOW << "Form constructor" << RESET << std::endl;
    
    if (_gradeSignature < 1 || _gradeExecution < 1)
        throw (GradeTooHighException());
    if (_gradeSignature > 150 || _gradeExecution > 150)
        throw (GradeTooLowException());
}

Form::~Form()
{
    //std::cout << YELLOW << "Form destructor" << RESET << std::endl;
}

Form::Form(const Form &copy) :
    _name(copy._name), _gradeSignature(copy._gradeSignature), _gradeExecution(copy._gradeExecution), 
    _signed(copy._signed)
{
    //std::cout << YELLOW << "Form copy constructor" << RESET << std::endl;
}

Form &Form::operator=(const Form &copy)
{
    if (this != &copy)
        _signed = copy._signed;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    form.printInfos();
	return (os);
}

std::string Form::getName() const
{
    return (_name);
}

bool Form::getSigned() const
{
    return (_signed);
}

int Form::getGradeSignature() const
{
    return (_gradeSignature);
}

int Form::getGradeExecution() const
{
    return (_gradeExecution);
}

const char *Form::GradeTooHighException::what () const throw()
{
    return ("the grade grade is to high\n");
}

const char *Form::GradeTooLowException::what () const throw()
{
    return ("the grade is to low\n");
}

void Form::printInfos() const
{
    std::cout << "Form = " << GREEN << _name << RESET << std::endl;
    std::cout << "Signed = " << _signed << std::endl; 
    std::cout << "Grade to sign = " << _gradeSignature << std::endl;
    std::cout << "Grade to execute = " << _gradeExecution << std::endl;
}

bool Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (_signed)
    {
        std::cout << PINK << "--- The form is already signed" << RESET << std::endl;
        return (false);
    }

    if (bureaucrat.getGrade() > _gradeSignature)
        throw (Form::GradeTooLowException());
    _signed = true;
    std::cout << BLUE << "--- The form have been signed" << RESET << std::endl;
    return (true);
}

const char *Form::FormNotSignedException::what() const throw()
{
    return ("the form is not signed\n");
}
