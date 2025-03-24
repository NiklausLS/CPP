#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string PINK = "\033[35m";
const std::string RESET = "\033[0m";

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(ScalarConverter const &);
        ScalarConverter &operator=(ScalarConverter const &);

        static int checkChar(const std::string &str);
        static void convertChar(const std::string &str);

        static int checkInt(const std::string &str);
        static void convertInt(const std::string &str);

        static int checkFloat(const std::string &str);
        static void convertFloat(const std::string &str);

    public:
        static void convert(const std::string &str);
};

#endif