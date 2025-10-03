#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &copy) { (void)copy; }
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy) 
{ 
    (void)copy; 
    return (*this); 
}

CheckType ScalarConverter::detectType(const std::string &str)
{
    if (str.empty())
        return INVALID;
    
    if (str.length() == 1 && !std::isdigit(str[0]))
        return (CHAR);
    
    if (str == "-inff" || str == "+inff" || str == "inff" || str == "nanf")
        return (FLOAT);
    
    if (str == "-inf" || str == "+inf" || str == "inf" || str == "nan")
        return (DOUBLE);
    
    size_t i = 0;
    bool hasDot = false;
    bool hasF = false;
    bool hasDigit = false;
    
    if (str[i] == '+' || str[i] == '-')
        i++;
    
    while (i < str.length())
    {
        if (std::isdigit(str[i]))
        {
            hasDigit = true;
            i++;
        }
        else if (str[i] == '.' && !hasDot && hasDigit)
        {
            hasDot = true;
            i++;
        }
        else if (str[i] == 'f' && i == str.length() - 1 && hasDot)
        {
            hasF = true;
            i++;
        }
        else
            return (INVALID);
    }
    if (!hasDigit)
        return (INVALID);
    if (hasF && hasDot)
        return (FLOAT);
    else if (hasDot && !hasF)
        return (DOUBLE);
    else if (!hasDot && !hasF)
        return (INT);
    return (INVALID);
}

void ScalarConverter::printChar(const std::string &str, CheckType type)
{
    std::cout << "char = ";
    
    if (type == CHAR)
    {
        std::cout << "'" << str[0] << "'" << std::endl;
        return ;
    }
    
    if (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || 
        str == "inf" || str == "+inff" || str == "-inff" || str == "inff")
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    
    double val = std::atof(str.c_str());
    
    if (val < 0 || val > 127 || std::isnan(val) || std::isinf(val))
    {
        std::cout << "impossible" << std::endl;
    }
    else if (val < 32 || val > 126)
    {
        std::cout << "Non displayable" << std::endl;
    }
    else
    {
        std::cout << "'" << static_cast<char>(val) << "'" << std::endl;
    }
}

void ScalarConverter::printInt(const std::string &str, CheckType type)
{
    std::cout << "int = ";
    
    if (type == CHAR)
    {
        std::cout << static_cast<int>(str[0]) << std::endl;
        return ;
    }
    
    if (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || 
        str == "inf" || str == "+inff" || str == "-inff" || str == "inff")
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    
    double val = std::atof(str.c_str());
    
    if (val < std::numeric_limits<int>::min() || 
        val > std::numeric_limits<int>::max() ||
        std::isnan(val) || std::isinf(val))
    {
        std::cout << "impossible" << std::endl;
    }
    else
        std::cout << static_cast<int>(val) << std::endl;
}

void ScalarConverter::printFloat(const std::string &str, CheckType type)
{
    std::cout << "float = ";
    
    if (type == CHAR)
    {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << static_cast<float>(str[0]) << "f" << std::endl;
        return ;
    }
    
    float val = static_cast<float>(std::atof(str.c_str()));
    
    if (std::isnan(val))
    {
        std::cout << "nanf" << std::endl;
    }
    else if (std::isinf(val))
    {
        if (val > 0)
            std::cout << "+inff" << std::endl;
        else
            std::cout << "-inff" << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << val << "f" << std::endl;
    }
}

void ScalarConverter::printDouble(const std::string &str, CheckType type)
{
    std::cout << "double = ";
    
    if (type == CHAR)
    {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << static_cast<double>(str[0]) << std::endl;
        return ;
    }
    
    double val = std::atof(str.c_str());
    
    if (std::isnan(val))
    {
        std::cout << "nan" << std::endl;
    }
    else if (std::isinf(val))
    {
        if (val > 0)
            std::cout << "+inf" << std::endl;
        else
            std::cout << "-inf" << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(1);
        std::cout << val << std::endl;
    }
}

void ScalarConverter::convert(const std::string &str)
{
    CheckType type = detectType(str);
    
    if (type == INVALID)
    {
        std::cout << "Error: invalid literal" << std::endl;
        return ;
    }
    
    printChar(str, type);
    printInt(str, type);
    printFloat(str, type);
    printDouble(str, type);
}