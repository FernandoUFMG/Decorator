#include <sstream>
#include "NumberDecorator.hpp"

std::string NumberDecorator::toString()
{
    std::string a, b, c = "";
    std::istringstream ss(StreamDecorator::toString());
    std::getline(ss, a, ' ');
    while (a != b)
    {
        b = a;
        std::getline(ss, a, ' ');
        if (a != b)
            if ((((int)b[0] >= 48) && ((int)b[0] <= 57) && (b[1] != '.')))
                c += "+" + b + " ";
            else
                c += b + " ";
    }
    if ((((int)b[0] >= 48) && ((int)b[0] <= 57) && (b[1] != '.')))
        c += "+" + b;
    else
        c += b;
    return c;
}