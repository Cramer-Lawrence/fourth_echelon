#include "print_out.h"

#include <iostream>

void printOut::printString(std::vector<std::string> stringsToPrint)
{
    
    for (std::string str : stringsToPrint)
    {
        std::cout << str << " ";
    }

    std::cout << "\n";
}