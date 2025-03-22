#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form("Presidential Pardon Form", 25, 5), _target(target)
{
    //std::cout << YELLOW << "Presidential pardon form constructor" << RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << YELLOW << "Presidential pardon form destructor" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
    Form(copy), _target(copy._target)
{
    //std::cout << YELLOW << "Presidential pardon form copy constructor" << RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    if (this != &copy)
    {
        Form::operator=(copy);
        _target = copy._target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!getSigned())
        throw Form::FormNotSignedException();
    
    if (executor.getGrade() > getGradeExecution())
        throw Form::GradeTooLowException();
    
    std::cout << GREEN << _target << " has been pardoned by Zaphod Beeblebrox" << RESET << std::endl;
}
