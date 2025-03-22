#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
    Form("Robotomy Request Form", 72, 45), _target(target)
{
    //std::cout << YELLOW << "Robotomy Request Form constructor" << RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << YELLOW << "Robotomy Request Form destructor" << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
    Form(copy), _target(copy._target)
{
    //std::cout << YELLOW << "Robotomy Request Form copy constructor" << RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this != &copy)
    {
        Form::operator=(copy);
        _target = copy._target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!getSigned())
        throw Form::FormNotSignedException();
    
    if (executor.getGrade() > getGradeExecution())
        throw Form::GradeTooLowException();
    
    std::cout << PINK << "--- BZZZZZZ" << RESET << std::endl;
    
    std::srand(std::time(NULL));
    
    if (std::rand() % 2)
        std::cout << GREEN << _target << " is robotomized" << RESET << std::endl;
    else
        std::cout << RED << "Robotomy failed on " << _target << RESET << std::endl;
}
