#ifndef PRINT
#define PRINT

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define TURQUISE "\033[36m"

#define DEFAULT "\033[0m"
#define BOLD "\033[1m"

#include <iostream>

#define string std::string

template <class T>
void print(T message, string colorCode = DEFAULT)
{
    std::cout << colorCode << message << std::endl;
}

template <class T>
void write(T message, string colorCode = DEFAULT)
{
    std::cout << colorCode << message;
}

void print(string, string);
void write(string, string);

string to_String(int variable);
string to_String(unsigned int variable);

#endif