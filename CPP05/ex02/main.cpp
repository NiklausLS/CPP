#include "./includes/Bureaucrat.hpp"
#include "./includes/Form.hpp"
#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/RobotomyRequestForm.hpp"
#include "./includes/PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat a("Director", 1);
    a.printInfos();
    std::cout << "-------------" << std::endl;
    Bureaucrat b("Student", 145);
    b.printInfos();
    std::cout << "-------------" << std::endl;

    /*ShrubberyCreationForm garden("garden");
    garden.printInfos();
    std::cout << "-------------" << std::endl;

    b.signForm(garden);
    b.executeForm(garden);
    std::cout << "-------------" << std::endl;
    b.signForm(garden);*/

    RobotomyRequestForm bzz("robotomy");
    bzz.printInfos();
    std::cout << "-------------" << std::endl;
    a.signForm(bzz);
    a.executeForm(bzz);
    std::cout << "-------------" << std::endl;
    a.signForm(bzz);

    PresidentialPardonForm president("pardon");
    president.printInfos();
    std::cout << "-------------" << std::endl;
    a.signForm(president);
    a.executeForm(president);
    std::cout << "-------------" << std::endl;
    a.signForm(president);

}
