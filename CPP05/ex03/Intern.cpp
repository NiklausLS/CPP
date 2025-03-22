#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/Form.hpp"
#include "./includes/Bureaucrat.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"
#include "./includes/Intern.hpp"

Intern::Intern()
{
    std::cout << YELLOW << "Intern constructor" << RESET << std::endl;
}

Intern::~Intern()
{
    std::cout << YELLOW << "Intern destructor" << RESET << std::endl;
}

Intern::Intern(const Intern &copy)
{
    std::cout << YELLOW << "Intern copy constructor" << RESET << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
    std::cout << YELLOW << "Intern assignement operator" << RESET << std::endl;
    (void)copy;
    return (*this);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    std::string formArray[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; i++)
    {
        if (formName == formArray[i])
        {
            Form *form = NULL;
            switch (i)
            {
                case 0:
                    form = new ShrubberyCreationForm(target);
                    break;
                case 1:
                    form = new RobotomyRequestForm(target);
                    break;
                case 2:
                    form = new PresidentialPardonForm(target);
                    break;
            }
            std::cout << BLUE << "--- Intern make " << formName << RESET << std::endl;
            return (form);
        }
    }

    std::cerr << RED << "Error: " << formName << " is wrong" << RESET << std::endl;
    return (NULL);
}
