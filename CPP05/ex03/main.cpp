#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/Intern.hpp"

int main()
{
    Bureaucrat a("Director", 1);
    a.printInfos();
    std::cout << "-------------" << std::endl;
    
    Intern victim;
    
    Form *shrubbery = victim.makeForm("shrubbery creation", "garden");
    Form *robotomy = victim.makeForm("robotomy request", "Bender");
    Form *pardon = victim.makeForm("presidential pardon", "Bender");

    delete (shrubbery);
    delete (robotomy);
    delete (pardon);
    return (0);
}
