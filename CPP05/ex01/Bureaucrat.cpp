#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    //std::cout << YELLOW << "Bureaucrat constructor" << std::endl;
    
    if (_grade > 150)
        throw (GradeTooLowException());
    if (_grade < 1)
        throw (GradeTooHighException());
    
    //std::cout << "--- name = " << name << std::endl;
    //std::cout << "--- grade = " << grade << RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << YELLOW << "Bureaucrat destructor" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
{
    //std::cout << YELLOW << "Bureaucrat copy" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    if (this != &copy)
        _grade = copy._grade;
    return (*this);
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
        throw (GradeTooHighException());
    _grade--;
    std::cout << BLUE << "+++ Incrementing " << _name << " grade" << RESET << std::endl;
}

void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw (GradeTooLowException());
    _grade++;
    std::cout << BLUE << "--- Decrementing " << _name << " grade" << RESET << std::endl;
}

void Bureaucrat::printInfos() const
{
    std::cout << GREEN <<_name << RESET 
              << ", bureaucrat grade "
              << GREEN << _grade << RESET << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what () const throw()
{
    return ("Error: Grade is to high\n");
}

const char *Bureaucrat::GradeTooLowException::what () const throw()
{
    return ("Error: Grade is to low\n");
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        bool signed_ok = form.beSigned(*this);
        if (signed_ok)
            std::cout << GREEN << _name << " signed " << form.getName()
            << RESET << std::endl;
        else
            std::cout << PINK << _name << " couldn't sign " << form.getName() << " because it's already signed"
            << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << _name << " cound't sign " << form.getName() 
            << " because " << e.what() << RESET;
    }
}
