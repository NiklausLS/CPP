//A RETENIR
//Les classes d'exception n'ont pas à se conformer 
//à la fome canonique de Coplien

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <fstream>

class Form;

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string PINK = "\033[35m";
const std::string RESET = "\033[0m";

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

        std::string getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

        void printInfos() const;

        void signForm(Form &form);
        void executeForm(Form const & form);
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

};

#endif