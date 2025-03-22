#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    /*std::cout << "\n--- TEST GRADE TO HIGH ---" << std::endl;
    try
    {
        Bureaucrat a("Nicolas", 1);
        a.printInfos();
        //a.decrementGrade();
        //a.printInfos();
        a.incrementGrade();
        a.printInfos();
    }
    catch (std::exception & e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }

    std::cout << "\n--- TEST GRADE TO LOW ---" << std::endl;
    try
    {
        Bureaucrat b("Kévin", 150);
        //b.printInfos();
        //b.decrementGrade();
        //b.printInfos();
        b.incrementGrade();
        b.printInfos();
    }
    catch (std::exception & e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }*/
    
    std::cout << "\n--- FORM TESTS ---" << std::endl;
    try
    {
        Form gossip("Gossip", 150, 150);
        Form secret("Secret", 2, 1);
        //Form tax("Tax", 1, 1);
        //tax.printInfos();

        gossip.printInfos();
        std::cout << "--------" << std::endl;
        secret.printInfos();
        std::cout << "--------" << std::endl;
    
        Bureaucrat a("Nicolas", 1);
        a.signForm(gossip);
        std::cout << "--------" << std::endl;
        a.signForm(secret);
        std::cout << "--------" << std::endl;

        Bureaucrat b("Kévin", 150);
        b.signForm(gossip);
        std::cout << "--------" << std::endl;
        b.signForm(secret);
        std::cout << "--------" << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
}
