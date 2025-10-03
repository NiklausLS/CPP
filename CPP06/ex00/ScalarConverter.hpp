#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cmath>
#include <cstdlib>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string PINK = "\033[35m";
const std::string RESET = "\033[0m";

enum CheckType
{
    CHAR,
    INT,
    FLOAT,
    DOUBLE,
    INVALID
};

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);

        static CheckType detectType(const std::string &str);
        static void printChar(const std::string &str, CheckType type);
        static void printInt(const std::string &str, CheckType type);
        static void printFloat(const std::string &str, CheckType type);
        static void printDouble(const std::string &str, CheckType type);

    public:
        static void convert(const std::string &str);
};

#endif
