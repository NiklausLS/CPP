#include "Bureaucrat.hpp"

int main()
{
    /*Bureaucrat a("Nicolas", 10);
    Bureaucrat b("Kevin", 20);

    std::cout << "name = " << BLUE << a.getName() << RESET << std::endl;
    std::cout << "grade = " << BLUE << a.getGrade() << RESET << std::endl;

    std::cout << "name = " << BLUE << b.getName() << RESET << std::endl;
    std::cout << "grade = " << BLUE << b.getGrade() << RESET << std::endl;
    
    a.incrementGrade();
    std::cout << "increment grade = " << GREEN << a.getGrade() << RESET << std::endl;
    a.decrementGrade();
    std::cout << "decrement grade = " << RED << a.getGrade() << RESET << std::endl;

    a.printInfos();
    b.printInfos();

    Bureaucrat copy(a);
    std::cout << "--- TEST COPY << ---" << std::endl;
    std::cout << copy << std::endl;

    b = a;
    std::cout << "--- TEST DEEP COPY ---" << std::endl;
    //std::cout << "name = " << BLUE << a.getName() << RESET << std::endl;
    //std::cout << "grade = " << BLUE << a.getGrade() << RESET << std::endl;
    //std::cout << "name = " << BLUE << b.getName() << RESET << std::endl;
    //std::cout << "grade = " << BLUE << b.getGrade() << RESET << std::endl;
    a.printInfos();
    b.printInfos();

    std::cout << "--- TEST INCREMENT ---" << std::endl;
    b.printInfos();
    b.incrementGrade();
    b.printInfos();
    std::cout << "--- TEST DECREMENT ---" << std::endl;
    b.printInfos();
    b.decrementGrade();
    b.printInfos();*/

    std::cout << "\n--- TEST GRADE TO HIGH ---" << std::endl;
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
    }
}
