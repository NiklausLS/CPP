#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << YELLOW << "Scalar constructor" << RESET << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << YELLOW << "Scalar destructor" << RESET << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    std::cout << YELLOW << "Scalar copy constructor" << RESET << std::endl;
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    std::cout << YELLOW << "Scalar assignement operator" << RESET << std::endl;
    (void)copy;
    return (*this);
}

void ScalarConverter::convert(const std::string &str)
{
    char convChar = convertChar(str);
    //std::cout << "convChar = " << convChar << std::endl;

    int convInt = convertInt(str);
    //std::cout << "convInt = " << convInt << std::endl;

    float convFloat = convertFloat(str);
    //std::cout << "convFloat = " << convFloat << std::endl;

    double convDouble = convertDouble(str);
    //std::cout << "convDouble = " << convDouble << std::endl;
}

int ScalarConverter::checkChar(const std::string &str)
{
    //std::cout << PINK << "START CHECKCHAR" << RESET << std::endl;
    //std::cout << "argv[1] = " << str << std::endl;

    if (str.length() != 1)
        return (1);
    else if (str[0] < 32 || str[0] > 126)
        return (2);
    else if (std::isdigit(str[0]))
        return (3);
    return (0);
}

char ScalarConverter::convertChar(const std::string &str)
{
    int check = checkChar(str);
    char c = str[0];
    //std::cout << "check = " << check << std::endl;
    
    if (check == 0)
        std::cout << GREEN << "char: '" << c << "'" << RESET << std::endl;
    else if (check == 1)
        std::cout << RED << "char: impossible" << RESET << std::endl;
    else if (check == 2 || check == 3)
        std::cout << RED << "char: Non displayable" << RESET << std::endl;
    return (c);
}

int ScalarConverter::checkInt(const std::string &str)
{
    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    while (i < str.length())
    {
        if (!std::isdigit(str[i]))
            return (1);
        i++;
    } 
    return (0);
}

int  ScalarConverter::convertInt(const std::string &str)
{
    int check = checkInt(str);
    int res = std::atoi(str.c_str());
    
    if (check == 0)
        std::cout << GREEN << "int: " << res << RESET << std::endl;
    else if (check == 1)
        std::cout << RED << "int: impossible" << std::endl;
    return (res);
}

int ScalarConverter::checkFloat(const std::string &str)
{
    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;   
    while (i < str.length())
    {
        if (!std::isdigit(str[i]))
            return (1);
        i++;
    }
    return (0);
}

float ScalarConverter::convertFloat(const std::string &str)
{
    int check = checkFloat(str);
    float res = std::atof(str.c_str());

    if (check == 0)
        std::cout << GREEN << "float: " << res << "f" << std::endl;
    else if (check == 1)
    {
        if ((check = checkChar(str)) == 0)
            std::cout << RED << "float: impossible"<< RESET << std::endl;
        else
            std::cout << RED << "float: " << res << "f" << RESET << std::endl;
    }
    return (res);
}

int ScalarConverter::checkDouble(const std::string &str)
{
    size_t i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;   
    while (i < str.length())
    {
        if (!std::isdigit(str[i]))
            return (1);
        i++;
    }
    return (0);
}

double ScalarConverter::convertDouble(const std::string &str)
{
    int check = checkDouble(str);
    double res = std::atof(str.c_str());
    
    if (check == 0)
        std::cout << GREEN << "double: " << res  << ".0" << std::endl;
    else
        std::cout << RED << "double: impossible" << RESET << std::endl;
    return (res);
}
