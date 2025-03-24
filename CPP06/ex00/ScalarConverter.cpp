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
    convertChar(str);
    convertInt(str);
    convertFloat(str);
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

void ScalarConverter::convertChar(const std::string &str)
{
    int check = checkChar(str);
    //std::cout << "check = " << check << std::endl;
    if (check == 0)
        std::cout << GREEN << "char: '" << str[0] << "'" << RESET << std::endl;
    else if (check == 1)
        std::cout << RED << "char: impossible" << RESET << std::endl;
    else if (check == 2 || check == 3)
        std::cout << RED << "char: Non displayable" << RESET << std::endl;
}

int ScalarConverter::checkInt(const std::string &str)
{
    //std::cout << PINK << "START CHECKINT" << RESET << std::endl;
    //std::cout << "argv[1] = " << str << std::endl;
    size_t i = 0;
    
    if (str.empty())
        return (1);
    while (str[i] == '-' || str[i] == '+')
        i++;
    if (i > 1)
        return (1);
    if (i == str.length())
        return (1);
    while (i < str.length())
    {
        if (!std::isdigit(str[i]))
            return (2);
        i++;
    }
    return (0);
}
void  ScalarConverter::convertInt(const std::string &str)
{
    int check = checkInt(str);
    //std::cout << "check = " << check << std::endl;

    if (check != 0)
    {
        std::cout << RED << "int: impossible" << RESET << std::endl;
        return ;
    }
    
    int value = std::atoi(str.c_str());
    std::cout << GREEN << "int: " << value << RESET << std::endl;
}

int ScalarConverter::checkFloat(const std::string &str)
{
    std::cout << PINK << "START CHECKFLOAT" << RESET << std::endl;
    std::cout << "argv[1] = " << str << std::endl;

    size_t i = 0;
    int    int_ok = 0;

    if (str.empty())
        return (1);
    if (str.length() < 2)
        return (2);
    if (str[str.length() - 1] == 'f')
    {
        std::string nbr = str.substr(0, str.length() - 1);
        std::cout << "checkF = " << nbr << std::endl;
        if (checkInt(nbr) == 0)
            int_ok = 1;
        else
            return (1);
    }
    return (0);
}

void ScalarConverter::convertFloat(const std::string &str)
{
    int check = checkFloat(str);
    std::cout << "check = " << check << std::endl;
    
    if (check == 0)
        std::cout << GREEN << "float: "  << str << "f" << RESET << std::endl;
    else if (check == 2)
    {
        if (str[str.length() - 1] == 'f')
            std::cout << GREEN << "float: "  << str << RESET << std::endl;
        else
            std::cout << GREEN << "float: "  << str << "f" << RESET << std::endl;
    }
    else if (check == 1)
        std::cout << RED << "float: impossible" << RESET << std::endl;
}