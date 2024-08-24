#include "Print.hpp"

void print(string message, string colorCode = DEFAULT)
{
    std::cout << colorCode << message << std::endl;
}

void write(string message, string colorCode = DEFAULT)
{
    std::cout << colorCode << message;
}

string to_String(int variable)
{
    string result;
    bool isNegative = false;

    if (variable < 0) 
    {
        isNegative = true;
        variable = -variable;
    }

    do {
        char digit = '0' + variable % 10;
        result = digit + result;
        variable /= 10;
    } while (variable != 0);

    if (isNegative) {
        result = '-' + result;
    }

    return result;
}

string to_String(unsigned int variable)
{
    string result;

   if (variable == 0) {
        result = "0";
    } else {
        while (variable != 0) {
            char digit = '0' + (variable % 10);
            result = digit + result;
            variable /= 10;
        }
    }
    return result;
}