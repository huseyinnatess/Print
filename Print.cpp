#include "Print.hpp"

void print(string message, string colorCode = DEFAULT)
{
    std::cout << colorCode << message << std::endl;
}

void printError(string message, string colorCode = DEFAULT)
{
    std::cerr << colorCode << message << std::endl;
}

void write(string message, string colorCode = DEFAULT)
{
    std::cout << colorCode << message;
}

string ConvertToString(const int variable)
{
    string result;

    int temp = variable;

    try
    {
        if (temp < 0)
        {
        result = "-";
        temp = -temp;
        }

        do {
            char digit = '0' + temp % 10;
            result = digit + result;
            temp /= 10;
        } while (temp != 0);
    }
    catch (...)
    {
        print("ConvertToString: Error while converting int to string", RED);
        throw;
    }
    return result;
}

string ConvertToString(const unsigned int variable)
{
    string result;

    unsigned int temp = variable;

    try
    {
        do {
        char digit = '0' + temp % 10;
        result = digit + result;
        temp /= 10;
        }  while (temp != 0);
    }
    catch (...)
    {
        print("ConvertToString: Error while converting int to string", RED);
        throw;
    }
    return result;
}

int ConvertToInt(const string variable)
{
    int result = 0;
    int i = 0;
    bool isNegative = false;

    try {
        if (variable[0] == '-') {
            isNegative = true;
            i++;
        }

        while (variable[i] != '\0') {
            result = result * 10 + variable[i] - '0';
            i++;
        }

        if (isNegative) {
            result = -result;
        }
    }
    catch (...)
    {
        print("ConvertToInt: Error while converting string to int", RED);
        throw;
    }

    return result;
}