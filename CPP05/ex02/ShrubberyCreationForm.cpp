#include "./includes/ShrubberyCreationForm.hpp"
#include "./includes/Form.hpp"
#include "./includes/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
    Form("Shrybbery Creation Form", 145, 137), _target(target)
{
    //std::cout << YELLOW << "Shrubbery Creation Form constructor" << std::endl;
    //std::cout << "--- target = " << target << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << YELLOW << "Shrubbery Creation Form destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) :
    Form(copy), _target(copy._target)
{
    //std::cout << YELLOW << "Shrubbery Creation Form copy constructor" << RESET << std::endl;

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
    {
        Form::operator=(copy);
        _target = copy._target;
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (getSigned() == false)
        throw (Form::FormNotSignedException());

    if (executor.getGrade() > getGradeExecution())
        throw (Form::GradeTooLowException());

    std::string newfile = _target + "_shrubbery";
    std::ofstream file(newfile.c_str());

    if (!file.is_open())
    {
        std::cerr << RED << "Error: Can't make a file" << RESET << std::endl;
        return;
    }

    file << "  *     *  " << std::endl;
    file << " ***   *** " << std::endl;
    file << "***** *****" << std::endl;
    file << "  |     |  " << std::endl;

    file.close();
}