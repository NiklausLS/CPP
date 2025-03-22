#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _signed;
        const int _gradeSignature;
        const int _gradeExecution;

    public:
        Form(std::string name, int _gradeSignature, int _gradeExecution);
        ~Form();
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        
        std::string getName() const;
        bool getSigned() const;
        int getGradeSignature() const;
        int getGradeExecution() const;
    
        void printInfos() const;

        bool beSigned(Bureaucrat const &Bureaucrat);

        virtual void execute(Bureaucrat const &executor) const = 0;

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

        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

#endif